/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebassi <ebassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 18:24:17 by ebassi            #+#    #+#             */
/*   Updated: 2022/10/06 18:46:57 by ebassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) : _type("Default")
{
	std::cout << "Default constructor for Animal called!" << std::endl;
}

Animal::Animal(Animal const & rhs)
{
	std::cout << "Copy construcotr for Animal called!" << std::endl;
	this->setType(rhs.getType());
}

Animal::~Animal(void)
{
	std::cout << "Default destructor for Animal called!" << std::endl;
}

Animal& Animal::operator=(Animal const & rhs)
{
	std::cout << "Copy assignment operator called on Animal" << std::endl;
	if (this == &rhs)
		return (*this);
	this->setType(rhs.getType());
	return (*this);
}

std::string Animal::getType(void) const
{
	return (this->_type);
}

void Animal::setType(std::string type)
{
	this->_type = type;
}

void Animal::makeSound(void) const
{
	if (!this->getType().compare("Cat"))
		std::cout << "Meow" << std::endl;
	else if (!this->getType().compare("Dog"))
		std::cout << "Woof" << std::endl;
	else
		std::cout << "No animal type matching in my universe" << std::endl;
}

std::ostream&	operator<<(std::ostream& os, Animal const & an)
{
	os << an.getType() << std::endl;
	return (os);
}