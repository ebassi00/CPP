/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebassi <ebassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 15:49:14 by ebassi            #+#    #+#             */
/*   Updated: 2022/10/14 16:09:44 by ebassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <typename T>
Array<T>::Array() : _size(0), _arr(NULL)
{}

template <typename T>
Array<T>::Array(unsigned int n) : _size(n), _arr(new T[n])
{}

template <typename T>
Array<T>::Array(Array const & src) : _size(src.size()), _arr(new T[this->_size])
{
	for (unsigned int i = 0; i < this->_size; i++)
		this->_arr[i] = src._arr[i];
}

template <typename T>
Array<T>& Array<T>::operator=(Array const & rhs)
{
	if (this == &rhs)
		return (*this);
	this->_size = rhs.size();
	for (unsigned int i = 0; i < this->_size; i++)
		this->_arr[i] == rhs._arr[i];
	return (*this);
}

template <typename T>
Array<T>::~Array()
{
	if (this->_size)
		delete [] this->_arr;
}

template <typename T>
int	Array<T>::size() const
{
	return (this->_size);
}

template <typename T>
T Array<T>::getValue(unsigned int idx) const
{
	if (this->_size <= idx || idx < 0)
		throw Array<T>::IndexOutOfBounds();
	return (this->_arr[idx]);
}

template <typename T>
void Array<T>::setValue(T val, unsigned int idx)
{
	if (this->_size <= idx || idx < 0)
		throw Array<T>::IndexOutOfBounds();
	this->_arr[idx] = val;
}