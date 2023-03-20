/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebassi <ebassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 15:36:03 by ebassi            #+#    #+#             */
/*   Updated: 2022/10/14 16:10:32 by ebassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

int	main()
{
	Array<int>	b(20);

	b.setValue(1, 0);
	
	Array<int>	copy(b);

	Array<int>	copy2 = copy;

	try
	{
		b.setValue(0, -1);
	}
	catch(Array<int>::IndexOutOfBounds& e)
	{
		std::cerr << e.what() << '\n';
	}
	b.setValue(0, 0);
	b.setValue(10, 10);
	b.setValue(9, 19);
	b.setValue(5, 2);
	try
	{
		copy2.setValue(3, 0);
		copy2.setValue(14, 20);
	}
	catch(Array<int>::IndexOutOfBounds& e)
	{
		std::cerr << e.what() << '\n';
	}
	

	for (int i = 0; i < b.size(); i++)
		std::cout << "Element of B array is " << b.getValue(i) << std::endl;
	std::cout << std::endl << std::endl;
	for (int i = 0; i < copy.size(); i++)
		std::cout << "Element of Copy array is " << copy.getValue(i) << std::endl;
	std::cout << std::endl << std::endl;
	for (int i = 0; i < copy2.size(); i++)
		std::cout << "Element of Copy2 array is " << copy2.getValue(i) << std::endl;
	std::cout << std::endl << std::endl;
	return (0);
}