/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebassi <ebassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 16:15:39 by ebassi            #+#    #+#             */
/*   Updated: 2022/10/17 15:06:38 by ebassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <list>
#include <vector>

int	main()
{
	std::list<int>				arr;
	std::vector<int>			arr2;

	arr.push_back(10);
	arr.push_back(10);
	arr.push_back(10);
	arr.push_back(10);
	arr.push_back(5);
	arr.push_back(10);
	arr.push_back(10);
	arr.push_back(10);
	try
	{
		std::cout << *(::easyfind(arr, 5)) << std::endl;
		std::cout << *(::easyfind(arr, 10)) << std::endl;
		std::cout << *(::easyfind(arr, -1)) << std::endl;
	}
	catch (ElementNotFound& e)
	{
		std::cout << e.what() << std::endl;
	}
	arr2.push_back(10);
	arr2.push_back(10);
	arr2.push_back(10);
	arr2.push_back(10);
	arr2.push_back(5);
	arr2.push_back(10);
	arr2.push_back(10);
	arr2.push_back(10);
	try
	{
		std::cout << *(::easyfind(arr2, 5)) << std::endl;
		std::cout << *(::easyfind(arr2, 10)) << std::endl;
		std::cout << *(::easyfind(arr2, -1)) << std::endl;
	}
	catch (ElementNotFound& e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}