/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebassi <ebassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 19:22:51 by ebassi            #+#    #+#             */
/*   Updated: 2022/10/12 19:22:53 by ebassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"

int	main()
{
	Data	d(5);

	std::cout << "Value is " << d.getValue() << ", its address is " << &d << std::endl;
	std::cout << "Serializing..." << std::endl;
	std::cout << "Serialized value is " << serialize(&d) << std::endl;
	std::cout << "Deserializing..." << std::endl;
	std::cout << "Deserialized value is " << deserialize(serialize(&d)) << std::endl;
	std::cout << "Value is " << d.getValue() << ", its address is " << &d << std::endl;
	return (0);
}