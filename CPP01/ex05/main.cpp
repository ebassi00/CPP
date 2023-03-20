/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebassi <ebassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 15:09:21 by ebassi            #+#    #+#             */
/*   Updated: 2022/04/01 15:33:07 by ebassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

int main()
{
	Harl harl;

	std::cout << "[ DEBUG ]" << std::endl;
	harl.complain("DEBUG");
	std::cout << "[ INFO ]" << std::endl;
	harl.complain("INFO");
	std::cout << "[ WARNING ]" << std::endl;
	harl.complain("WARNING");
	std::cout << "[ ERROR ]" << std::endl;
	harl.complain("ERROR");
}