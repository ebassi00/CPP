/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebassi <ebassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 15:11:11 by ebassi            #+#    #+#             */
/*   Updated: 2022/10/21 14:19:17 by ebassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int n) : _size(n)
{
	this->_storage.reserve(n);
}

Span::Span(Span const &rhs) : _size(rhs._size)
{
	this->_storage = rhs._storage;
}

Span &Span::operator=(Span const &rhs)
{
	if (this == &rhs)
		return (*this);
	return (*this);
}

Span::~Span(void) {}

void Span::addNumber(int n)
{
	if (this->_storage.size() == this->_size)
		throw Span::MaxCapacity();
	this->_storage.push_back(n);
}

int Span::shortestSpan(void)
{
	int ret;
	int size = this->_storage.size();

	if (this->_storage.size() <= 1)
		throw Span::NotEnoughCapacity();
	std::sort(this->_storage.begin(), this->_storage.end());
	ret = this->_storage[1] - this->_storage[0];
    for (int n=0; n < size; n++)
        if (ret > (this->_storage[n + 1] - this->_storage[n]))
            ret = this->_storage[n + 1] - this->_storage[n];
	return (ret);
	
}

int Span::longestSpan(void)
{
	std::vector<int>::iterator min;
	std::vector<int>::iterator max;
	int ret;
	
	if (this->_storage.size() <= 1)
		throw Span::NotEnoughCapacity();
	min = std::min_element(this->_storage.begin(), this->_storage.end());
	max = std::max_element(this->_storage.begin(), this->_storage.end());
	ret = (int)(*min) - (int)(*max);
    ret = ret < 0 ? (ret * -1) : ret;
	return (ret);
}
