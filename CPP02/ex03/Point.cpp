/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebassi <ebassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 13:18:31 by ebassi            #+#    #+#             */
/*   Updated: 2022/10/06 15:09:51 by ebassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : _x(Fixed(0)), _y(Fixed(0)) {}

Point::Point(float const x, float const y) : _x(Fixed(x)), _y(Fixed(y)) {}

Point::~Point() {}

Point::Point(const Point &obj)
{
	*this = obj;
}

Fixed const &Point::getX(void) const
{
	return this->_x;
}

Fixed const &Point::getY(void) const
{
	return this->_y;
}

Point&	Point::operator=(Point const & rhs)
{
	if (this != &rhs)
		return (*new(this) Point(rhs._x.toFloat(), rhs._y.toFloat()));
	else
		return (*this);
}
