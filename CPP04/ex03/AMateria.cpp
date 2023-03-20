/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebassi <ebassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 16:20:30 by ebassi            #+#    #+#             */
/*   Updated: 2022/10/07 19:21:23 by ebassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void) : _type("Default")
{
	std::cout << "Default constructor called for AMateria!" << std::endl;
}

AMateria::AMateria(std::string const & type) : _type(type)
{
	std::cout << "Type constructor called for AMateria!" << std::endl;
}

AMateria::AMateria(AMateria const & rhs)
{
	std::cout << "Copy constructor called for AMateria!" << std::endl;
	*this = rhs;
}

AMateria &AMateria::operator=(const AMateria &rhs)
{
	std::cout << "Copy assignment operator called for AMateria!" << std::endl;
	this->_type = rhs._type;
	return *this;
}

AMateria::~AMateria(void)
{
	std::cout << "Destructor called for AMateria!" << std::endl;
}

std::string const &AMateria::getType() const
{ 
	return this->_type; 
}