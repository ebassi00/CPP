/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebassi <ebassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 15:09:21 by ebassi            #+#    #+#             */
/*   Updated: 2023/03/06 15:19:09 by ebassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		Harl harl;
		std::cout << std::endl;
		
		harl.complain(std::string(argv[1]));
	}
	return 0;
}