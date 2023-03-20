/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebassi <ebassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 16:24:12 by ebassi            #+#    #+#             */
/*   Updated: 2022/10/07 19:22:52 by ebassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(): AMateria("cure")
{
	std::cout << "Default constructor for Cure called!" << std::endl;
}

Cure::Cure(Cure const & rhs) : AMateria("cure")
{
	std::cout << "Copy constructor called for Cure" << std::endl;
	*this = rhs;
	return;
}

Cure::~Cure(void)
{
	std::cout << "Default destructor called for Cure!" << std::endl;
}

Cure& Cure::operator=(Cure const & rhs) 
{
	this->_type = rhs._type;
	std::cout << "Assignation operator called for Cure" << std::endl;
	return *this;
}

AMateria *Cure::clone(void) const
{
	return new Cure(*this);
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}