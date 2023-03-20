/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebassi <ebassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 14:08:49 by ebassi            #+#    #+#             */
/*   Updated: 2022/04/04 16:59:58 by ebassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _rawBits(0){}

Fixed::Fixed(const float nbr) : _rawBits(roundf(nbr *(1 << this->_bit))){}

Fixed::Fixed(const int nbr) : _rawBits(nbr << this->_bit){}

Fixed::Fixed(const Fixed &obj)
{
	*this = obj;
}

Fixed &Fixed::operator=(const Fixed &rhs)
{
	this->_rawBits = rhs.getRawBits();
	return *this;
}

Fixed::~Fixed(){}

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

bool Fixed::operator!= (const Fixed &fixed)
{
	return (this->_rawBits != fixed._rawBits);
}

bool Fixed::operator> (const Fixed &fixed)
{
	return (this->_rawBits > fixed._rawBits);
}

bool Fixed::operator< (const Fixed &fixed)
{
	return (this->_rawBits < fixed._rawBits);
}

bool Fixed::operator>= (const Fixed &fixed)
{
	return (this->_rawBits >= fixed._rawBits);
}

bool Fixed::operator<= (const Fixed &fixed)
{
	return (this->_rawBits <= fixed._rawBits);
}

bool Fixed::operator== (const Fixed &fixed)
{
	return (this->_rawBits == fixed._rawBits);
}

Fixed Fixed::operator+ (const Fixed &fixed)
{
	Fixed ret;

	ret.setRawBits(_rawBits + fixed._rawBits);
	return ret;
}

Fixed Fixed::operator- (const Fixed &fixed)
{
	Fixed ret;

	ret.setRawBits(_rawBits - fixed._rawBits);
	return ret;
}

Fixed Fixed::operator/ (const Fixed &fixed)
{
	Fixed ret(this->toFloat() / fixed.toFloat());
	return ret;
}

Fixed Fixed::operator* (const Fixed &fixed)
{
	Fixed ret;

	ret.setRawBits((this->_rawBits * fixed._rawBits) >> 8);
	return ret;
}

Fixed Fixed::operator-- (int)
{
	Fixed temp = *this;
	--*this;
	return temp;
}

Fixed Fixed::operator++ (int)
{
	Fixed temp = *this;
	++*this;
	return temp;
}

Fixed &Fixed::operator++ ()
{
	_rawBits++;
	return *this;
}

Fixed &Fixed::operator-- ()
{
	_rawBits--;
	return *this;
}

Fixed & Fixed::max(Fixed &a, Fixed &b) {
	return (a._rawBits > b._rawBits ? a : b);
}

Fixed & Fixed::min(Fixed &a, Fixed &b) {
	return (a._rawBits < b._rawBits ? a : b);
}

const Fixed & Fixed::max(Fixed const &a, Fixed const &b) {
	return (a._rawBits > b._rawBits ? a : b);
}

const Fixed & Fixed::min(Fixed const &a, Fixed const &b) {
	return (a._rawBits < b._rawBits ? a : b);
}

std::ostream& operator<<(std::ostream & os, Fixed const & i) 
{
	return(os << (i.toFloat()));
}