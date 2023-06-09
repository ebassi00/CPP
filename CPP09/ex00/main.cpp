/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebassi <ebassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 14:38:20 by ebassi            #+#    #+#             */
/*   Updated: 2023/04/19 14:31:28 by ebassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.cpp"

int main(int argc, char **argv)
{
	std::ifstream file;
	
	if (argc != 2)
	{
		std::cout << "Error: could not open file." << std::endl;
		return (0);
	}
	file.open(argv[1], std::ios::in);
	if (!file)
	{
		std::cout << "Error: could not open file." << std::endl;
		return (0);
	}
	std::map<std::string, float> map = getData();
	check_exchange(argv[1], map);
	return (1);
}