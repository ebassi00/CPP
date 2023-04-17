/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebassi <ebassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 14:38:20 by ebassi            #+#    #+#             */
/*   Updated: 2023/04/03 17:18:12 by ebassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange getvalue(std::string line)
{
	BitcoinExchange exchange;
	if (!exchange.check_date(line))
		return (exchange);
	else if (!exchange.check_value(line))
		return (exchange);
	int month = std::stoi(exchange.get_date().substr(5, 6));
	int day = std::stoi(exchange.get_date().substr(8, 9));
	if (month < 0 || month > 12 || day < 0 || day > 31)
	{
		std::cout << "Error: bad input => " << exchange.get_date() << std::endl;
		return (exchange);
	}
	std::cout << exchange.get_date() << "=> " << exchange.get_value() << " = " << std::endl;
	return (exchange);
}

int main(int argc, char **argv)
{
	std::ifstream file;
	std::vector<BitcoinExchange> lines;
	(void)argc;
	
	file.open(argv[1]);
	if (!file)
	{
		std::cout << "Error: could not open file." << std::endl;
		return (0);
	}
	while (file)
	{
		std::string line;
		std::getline(file, line);
		lines.push_back(getvalue(line));
	}
	file.close();
}