/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebassi <ebassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 18:34:45 by ebassi            #+#    #+#             */
/*   Updated: 2022/10/06 18:46:39 by ebassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
	std::cout << "Cat constructor called!" << std::endl;
	this->setType("Cat");
}

Cat::Cat(Cat const & rhs)
{
	std::cout << "Copy constructor for Cat called!" << std::endl;
	this->setType(rhs.getType());
}

Cat::~Cat(void)
{
	std::cout << "Destructor called for Cat!" << std::endl;
}

Cat& Cat::operator=(Cat const & rhs)
{
	std::cout << "Copy assignment operator called on Cat" << std::endl;
	if (this == &rhs)
		return (*this);
	this->setType(rhs.getType());
	return (*this);
}

std::ostream&	operator<<(std::ostream& os, Cat const & an)
{
	os << an.getType() << std::endl;
	return (os);
}