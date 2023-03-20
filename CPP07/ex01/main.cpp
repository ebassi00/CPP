/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebassi <ebassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 15:26:01 by ebassi            #+#    #+#             */
/*   Updated: 2022/10/14 15:34:26 by ebassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

template <typename T>
void	printInfo(T const & t)
{
	std::cout << "My value is: " << t << std::endl;
}

int	main()
{
	int const	arr[10] = {
		10, 9, 8, 7, 6, 5, 4, 3, 2, 1
	};
	std::string const	arr2[10] = {
		"dieci", "nove", "otto", "sette", "sei",
		"cinque", "quattro", "tre", "due", "uno"
	};
	iter(arr, 10, printInfo);
	std::cout << "First attempt finished" << std::endl;
	iter(arr2, 10, printInfo);
	std::cout << "Second attempt finished" << std::endl;
	return (0);
}