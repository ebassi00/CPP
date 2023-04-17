/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebassi <ebassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 14:38:36 by ebassi            #+#    #+#             */
/*   Updated: 2023/04/03 17:18:41 by ebassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <vector>
#include <fstream>

class BitcoinExchange {
	public:
		BitcoinExchange() {};
		BitcoinExchange(const BitcoinExchange &src)
		{
			*this = src;
		}
		BitcoinExchange &operator=(const BitcoinExchange &rhs)
		{
			if (this != &rhs)
			{
				this->_date = rhs._date;
				this->_value = rhs._value;
			}
			return (*this);
		}
		~BitcoinExchange() {};

		int check_date(std::string line)
		{
			std::string date;
			size_t pos = line.find("|");
			if (pos != std::string::npos) 
			{
				date = std::string(line.begin(), line.begin() + pos);
			}
			else 
			{
				// std::cout << "Error: bad input => " + line << std::endl;
				// return (0);
			}
			_date = date;
			return (1);
		}

		int check_value(std::string line)
		{
			size_t pos = line.find("|");
			if (pos != std::string::npos)
			{
				std::string value(line.begin() + line.find("|") + 1, line.end());
				_value = std::stod(value);
				if (_value < 0)
				{
					std::cout << "Error: not a positive number." << std::endl;
					return (0);
				}
				else if (_value > 1000)
				{
					std::cout << "Error: too large a number." << std::endl;;
					return (0);
				}
			}
			else
			{
				// std::cout << "Error: bad input => " + line << std::endl;
				// return (0);
			}
			return (1);
		}

		std::string get_date() const { return (_date); }
		double		get_value() const { return (_value); }

	private:
		std::string _date;
		double _value;
};