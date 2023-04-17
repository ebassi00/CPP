/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebassi <ebassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 14:08:49 by ebassi            #+#    #+#             */
/*   Updated: 2023/03/20 15:53:34 by ebassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() :
	_rawBits(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const float nbr) :
	_rawBits(roundf(nbr *(1 << this->_bit)))
{
	std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const int nbr) :
	_rawBits(nbr << this->_bit)
{
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &obj)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = obj;
}

Fixed &Fixed::operator=(const Fixed &rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_rawBits = rhs.getRawBits();
	return *this;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

void Fixed::setRawBits(int const raw)
{
	this->_rawBits = raw;
}

int Fixed::getRawBits() const
{
	return (this->_rawBits);
}

int	Fixed::toInt(void) const 
{
	return (this->_rawBits >> this->_bit);
}

float	Fixed::toFloat(void) const 
{
	return ((float)this->_rawBits / ( 1 << this->_bit));
}

std::ostream& operator<<(std::ostream & os, Fixed const & i) 
{
	return(os << (i.toFloat()));
}