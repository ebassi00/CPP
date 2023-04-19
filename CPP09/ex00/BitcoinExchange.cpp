/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebassi <ebassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 14:38:36 by ebassi            #+#    #+#             */
/*   Updated: 2023/04/19 15:44:27 by ebassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

std::map<std::string, float> getData()
{
	std::map<std::string, float> _data;
	std::ifstream file("data.csv");

	if (!file)
	{
		std::cout << "Error: could not open file." << std::endl;
		exit(0);
	}
	std::string line;
	std::getline(file, line);
	int pos;
	while (std::getline(file, line))
	{
		std::string date, rate;
		pos = line.find(',');
		date = line.substr(0, pos);
		rate = line.substr(pos + 1);
		_data[date] = atof(rate.c_str());
	}
	return (_data);
}

bool	check_date(std::string date){
	int	count = 0;

	for (std::string::size_type i=0; i < date.size(); i++)
		if (date[i] == '-')
			count++;
	if (count != 2){
		std::cout << "Error: date => " << date << std::endl;
		return false;}
	int first = date.find('-');
	int	year = atoi(date.substr(0, first).c_str());
	int second = date.find('-', first + 1);
	int	month = atoi(date.substr(first + 1, second ).c_str());
	int	day = atoi(date.substr(second + 1).c_str());
	if (year < 0){
		std::cout << "Error: year => " << year << std::endl;
		return false;}
	if (month < 1 || month > 12 || day < 1 ||
			(((month == 11 || month == 4 || month == 6 || month == 9) && day > 30) ||
			((month == 1 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) && day > 31))){
		std::cout << "Error: month or day => " << month << "-" << day << std::endl;
		return false;}
	if (month == 2 && year % 4 == 0 && day > 29){
		std::cout << "Error: february day => " << date << std::endl;
		return false;}
	else if (month == 2 && day > 28){
		std::cout << "Error: february day => " << date << std::endl;
		return false;}
	return true;
}

bool	check_value(std::string value){
	char	*endptr;
	long	num = strtol(value.c_str(), &endptr, 10);
	if (num > 2147483647){
		std::cout << "Error: too large number.\n";
		return 0;}
	else if (num < 0){
		std::cout << "Error: not a positive number.\n";
		return 0;}
	return 1;
}

void check_exchange(char *f, std::map<std::string, float> map)
{
	std::ifstream file(f);
	std::string line;
	int pos;
	while (std::getline(file, line))
	{
		std::string date, svalue;
		float value, result;
		if (line.rfind("date | value", 0 ) == 0)
			std::getline(file, line);
		if ((pos = line.find('|')) == -1){
			std::cout << "Error: bad input => " << line << std::endl;
			continue ;
		}
		date = line.substr(0, pos - 1);
		svalue = line.substr(pos + 2);

		if (!check_value(svalue) || !check_date(date))
			continue ;
		value = atof(svalue.c_str());
		if (map.count(date))
			result = map[date];
		else
		{
			std::map<std::string, float>::iterator i = map.upper_bound(date);
			i--;
			result = map[i->first];
		}
		result *= value;
		std::cout << date << " => " << value << " = " << result << std::endl;
	}
}