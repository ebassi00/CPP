/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebassi <ebassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 19:14:41 by ebassi            #+#    #+#             */
/*   Updated: 2022/10/12 19:23:40 by ebassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"

Data::Data(void) : _value(0) {}

Data::Data(int n) : _value(n) {}

Data::Data(Data const &rhs)
{
	this->_value = rhs._value;
	*this = rhs;
}

Data& Data::operator=(Data const &rhs)
{
	if (this == &rhs)
		return (*this);
	*this = rhs;
	return (*this);
}

Data::~Data(void) {}

int Data::getValue(void)
{
	return this->_value;
}

Data* deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data*>(raw));
}

uintptr_t serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}