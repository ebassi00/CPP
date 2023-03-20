/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebassi <ebassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 14:08:47 by ebassi            #+#    #+#             */
/*   Updated: 2022/04/04 14:34:50 by ebassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {

public:
	Fixed();
	Fixed(const int nbr);
	Fixed(const float nbr_float);
	Fixed(const Fixed &obj);
	Fixed &operator=(const Fixed &rhs);
	~Fixed();

	float toFloat(void) const;
	int toInt(void) const;
	int getRawBits(void) const;
	void setRawBits(int const raw);

	bool operator!= (const Fixed &fixed);
	bool operator> (const Fixed &fixed);
	bool operator< (const Fixed &fixed);
	bool operator>= (const Fixed &fixed);
	bool operator<= (const Fixed &fixed);
	bool operator== (const Fixed &fixed);
	Fixed operator+ (const Fixed &fixed);
	Fixed operator- (const Fixed &fixed);
	Fixed operator/ (const Fixed &fixed);
	Fixed operator* (const Fixed &fixed);
	Fixed operator-- (int);
	Fixed operator++ (int);
	Fixed &operator++ ();
	Fixed &operator-- ();
	static Fixed &max(Fixed &a, Fixed &b);
	static Fixed &min(Fixed &a, Fixed &b);
	static const Fixed &max(Fixed const &a, Fixed const &b);
	static const Fixed &min(Fixed const &a, Fixed const &b);
private:
	int _rawBits;
	static const int _bit = 8;
};

std::ostream&	operator<<(std::ostream& os, Fixed const & i);

#endif