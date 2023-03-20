/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebassi <ebassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 18:52:55 by ebassi            #+#    #+#             */
/*   Updated: 2022/10/07 15:47:01 by ebassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain constructor called!" << std::endl;
}

Brain::Brain(Brain const & rhs)
{
	int	i;

	i = -1;
	std::cout << "Copy construcotr for Brain called!" << std::endl;
	while (++i < 100)
		this->_ideas[i] = rhs.getIdea(i);
}

Brain::~Brain(void)
{
	std::cout << "Destructor called for Brain!" << std::endl;
}

Brain& Brain::operator=(Brain const & rhs)
{
	int	i;

	i = -1;
	std::cout << "Copy assignment operator called on Brain" << std::endl;
	if (this == &rhs)
		return (*this);
	while (++i < 100)
		this->_ideas[i] = rhs.getIdea(i);
	return (*this);
}

std::string	Brain::getIdea(int i) const
{
	return (this->_ideas[i]);
}

void Brain::setIdea(std::string s, int i)
{
	this->_ideas[i] = s;
}