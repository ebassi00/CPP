/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebassi <ebassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 18:37:22 by ebassi            #+#    #+#             */
/*   Updated: 2022/10/06 18:46:45 by ebassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
	std::cout << "Dog constructor called!" << std::endl;
	this->setType("Dog");
}

Dog::Dog(Dog const & rhs)
{
	std::cout << "Copy construcotr for Dog called!" << std::endl;
	this->setType(rhs.getType());
}

Dog::~Dog(void)
{
	std::cout << "Destructor called for Dog!" << std::endl;
}

Dog& Dog::operator=(Dog const & rhs)
{
	std::cout << "Copy assignment operator called on Dog" << std::endl;
	if (this == &rhs)
		return (*this);
	this->setType(rhs.getType());
	return (*this);
}

std::ostream&	operator<<(std::ostream& os, Dog const & an)
{
	os << an.getType() << std::endl;
	return (os);
}