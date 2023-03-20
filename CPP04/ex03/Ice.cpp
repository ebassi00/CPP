/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebassi <ebassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 16:24:16 by ebassi            #+#    #+#             */
/*   Updated: 2022/10/07 19:23:04 by ebassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(): AMateria("ice")
{
	std::cout << "Default constructor for Ice called!" << std::endl;
}

Ice::~Ice(void)
{
	std::cout << "Default destructor called for Ice!" << std::endl;
}

Ice::Ice(Ice const & rhs) : AMateria("ice")
{
	std::cout << "Copy constructor called for Ice" << std::endl;
	*this = rhs;
	return;
}

Ice& Ice::operator=(Ice const & rhs) 
{
	this->_type = rhs._type;
	std::cout << "Assignation operator called for Ice" << std::endl;
	return *this;
}

AMateria *Ice::clone(void) const
{
	return new Ice(*this);
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}