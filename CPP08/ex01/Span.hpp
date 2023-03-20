/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebassi <ebassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 15:11:00 by ebassi            #+#    #+#             */
/*   Updated: 2022/10/21 14:19:22 by ebassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <vector>

class Span
{
	public:
		Span(unsigned int n);
		Span(Span const &rhs);
		Span &operator=(Span const &rhs);
		~Span(void);

		void addNumber(int n);
		int shortestSpan(void);
		int longestSpan(void);

		class MaxCapacity : std::exception
		{
			public:
				virtual const char * what() const throw()
				{
					return ("Span is full! Can't add items");
				}
		};

		class NotEnoughCapacity : std::exception
		{
			public:
				virtual const char * what() const throw()
				{
					return ("Span is not full enough!");
				}
		};
	private:
		Span(void);
		unsigned int _size;
		std::vector<int> _storage;
};

#endif