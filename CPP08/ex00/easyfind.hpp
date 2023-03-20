/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebassi <ebassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 16:15:56 by ebassi            #+#    #+#             */
/*   Updated: 2022/10/17 15:09:41 by ebassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <iterator>

class ElementNotFound : public std::exception
{
	public:
		virtual const char * what() const throw()
		{
			return ("Element not found");
		}
};

template<typename T>
typename T::iterator easyfind(T cont, int b)
{
	typename T::iterator iter;

	iter = std::find(cont.begin(), cont.end(), b);
	if (iter == cont.end())
		throw ElementNotFound();
	return (iter);
}

#endif