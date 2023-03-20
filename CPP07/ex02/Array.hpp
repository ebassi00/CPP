/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebassi <ebassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 15:36:19 by ebassi            #+#    #+#             */
/*   Updated: 2022/10/14 16:08:25 by ebassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>

template<typename T>
class Array
{

public:
	Array(void);
	Array(unsigned int n);
	Array(Array const &rhs);
	Array &operator=(Array const &rhs);
	~Array(void);

	int size(void) const;
	T getValue(unsigned int idx) const;
	void setValue(T value, unsigned int idx);
	class IndexOutOfBounds : public std::exception
		{
			public:
				virtual const char * what() const throw()
				{
					return ("Index out of bound");
				}
		};
private:
	unsigned int _size;
	T *_arr;
};

#include "Array.tpp"

#endif