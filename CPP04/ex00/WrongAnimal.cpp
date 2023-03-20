/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebassi <ebassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 18:40:55 by ebassi            #+#    #+#             */
/*   Updated: 2022/10/06 18:43:02 by ebassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) : _type("Default")
{
	std::cout << "Default constructor called for WrongAnimal!" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const & rhs)
{
	std::cout << "Copy constructor called for WrongAnimal" << std::endl;
	this->setType(rhs.getType());
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "Default destructor called for WrongAnimal!" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(WrongAnimal const & rhs)
{
	std::cout << "Copy assignment operator called on WrongAnimal" << std::endl;
	if (this == &rhs)
		return (*this);
	this->setType(rhs.getType());
	return (*this);
}

std::string WrongAnimal::getType(void) const
{
	return (this->_type);
}

void WrongAnimal::setType(std::string type)
{
	this->_type = type;
}

void WrongAnimal::makeSound(void) const
{
	std::cout << "I'm the WrongAnimal!" << std::endl;
}

std::ostream&	operator<<(std::ostream& os, WrongAnimal const & an)
{
	os << an.getType() << std::endl;
	return (os);
}