/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebassi <ebassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 14:25:48 by ebassi            #+#    #+#             */
/*   Updated: 2022/10/21 16:48:10 by ebassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>
# include <list>
# include <algorithm>

template<typename T> 
class MutantStack : public std::stack<T>
{
	public:
		typedef typename std::stack<T>::container_type::iterator iterator;
		typedef typename std::stack<T>::container_type::const_iterator const_iterator;
        typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
        typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;
		
		MutantStack(void) : std::stack<T>() {};
		MutantStack(MutantStack const &rhs) : std::stack<T>(rhs) {};
		MutantStack &operator=(MutantStack const &rhs)
			{
				if (this == &rhs)
					return (*this);
				std::stack<T>::operator=(rhs);
				return (*this);
			};
		virtual ~MutantStack(void) {};

		iterator begin() { return (std::stack<T>::c.begin()); }
		const_iterator begin() const { return (std::stack<T>::c.begin()); }
		iterator end() { return (std::stack<T>::c.end()); }
		const_iterator end() const { return (std::stack<T>::c.end()); }
		reverse_iterator rbegin() { return (std::stack<T>::c.rbegin()); }
		reverse_iterator rend() { return (std::stack<T>::c.rend()); }
		reverse_iterator rbegin() const { return (std::stack<T>::c.rbegin()); }
		const_reverse_iterator rend() const { return (std::stack<T>::c.rend()); }
};

#endif