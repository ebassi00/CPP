/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebassi <ebassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 15:57:51 by ebassi            #+#    #+#             */
/*   Updated: 2022/10/12 19:13:18 by ebassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <climits>
#include <cstdint>
#include <iostream>
#include <cstring>
#include <cfloat>
#include <cmath>
#include <iomanip>

bool CheckForInvalidLiterals(std::string str)
{
	const char *type[4] = {
		"inf",
		"-inf",
		"+inf",
		"nan"
	};
	
	for (int i=0; i < 4; i++)
	{
		if (!str.compare(type[i]))
			return (1);
	}
	return (0);
}

void PrintInvalidLiterals(char *str)
{
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	std::cout << "float: " << str << "f" << std::endl;
	std::cout << "double: " << str << std::endl;
}

int conversion(std::string str)
{
	double converted;
	
	if ((str[0] > 32 && str[0] < 48) && (str[0] > 57 && str[0] < 126) && !str[1])
		converted = static_cast<char>(str[0]);
	else if ((str[0] > 32 && str[0] < 48) && (str[0] > 57 && str[0] < 126) && str[1])
	{
		std::cout << "User type conversion is impossible" << std::endl;
		return 0;
	}
	else
		converted = std::strtold(str.c_str(), NULL);
	if (converted < CHAR_MIN || converted > CHAR_MAX)
		std::cout << "char: impossible" << std::endl;
	else if (!std::isprint(converted))
		std::cout << "char: Not displayable" << std::endl;
	else
		std::cout << "char: '" << static_cast<char>(converted) << "'" << std::endl;
	if (converted < INT_MIN || converted > INT_MAX)
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(converted) << std::endl;
	if (converted < -FLT_MAX || converted > FLT_MAX)
		std::cout << "float: impossible" << std::endl;
	else if (std::isinf(converted))
		std::cout << "float: inff" << std::endl;
	else
		std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(converted) << "f" << std::endl;
	if (converted < -DBL_MAX || converted > DBL_MAX)
		std::cout << "double: impossible" << std::endl;
	else if (std::isinf(converted))
		std::cout << "double: inf" << std::endl;
	else
		std::cout << "double: " << static_cast<double>(converted) << std::endl;
	return (0);
}

int	main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Usage: ./convert '<value>'" << std::endl;
		return 1;
	}
	if (CheckForInvalidLiterals(av[1]))
		PrintInvalidLiterals(av[1]);
	else
		conversion(av[1]);
	return 0;
}