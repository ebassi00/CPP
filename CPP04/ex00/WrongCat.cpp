/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebassi <ebassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 18:45:23 by ebassi            #+#    #+#             */
/*   Updated: 2022/10/06 18:46:26 by ebassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
	std::cout << "WrongCat constructor called!" << std::endl;
	this->setType("WrongCat");
}

WrongCat::WrongCat(WrongCat const & rhs)
{
	std::cout << "Copy constructor for WrongCat called!" << std::endl;
	this->setType(rhs.getType());
}

WrongCat::~WrongCat(void)
{
	std::cout << "Destructor called for WrongCat!" << std::endl;
}

WrongCat& WrongCat::operator=(WrongCat const & rhs)
{
	std::cout << "Copy assignment operator called on WrongCat" << std::endl;
	if (this == &rhs)
		return (*this);
	this->setType(rhs.getType());
	return (*this);
}