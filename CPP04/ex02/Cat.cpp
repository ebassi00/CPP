/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebassi <ebassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 18:34:45 by ebassi            #+#    #+#             */
/*   Updated: 2022/10/07 16:03:19 by ebassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
	std::cout << "Cat constructor called!" << std::endl;
	this->setType("Cat");
	this->_brain = new Brain();
}

Cat::Cat(Cat const & rhs)
{
	std::cout << "Copy constructor for Cat called!" << std::endl;
	this->setType(rhs.getType());
	copyBrain(rhs.getBrain());
}

Cat::~Cat(void)
{
	std::cout << "Destructor called for Cat!" << std::endl;
	delete this->_brain;
}

Cat& Cat::operator=(Cat const & rhs)
{
	std::cout << "Copy assignment operator called on Cat" << std::endl;
	if (this == &rhs)
		return (*this);
	this->setType(rhs.getType());
	return (*this);
}

void	Cat::printBrain(void) const
{
	int	i;

	i = -1;
	while (++i < 100)
		std::cout << i << " = " << this->_brain->getIdea(i) << std::endl;
}

Brain*	Cat::getBrain(void) const
{
	return (this->_brain);
}

void Cat::copyBrain(Brain* b)
{
	int	i;

	i = -1;
	while (++i < 100)
		this->_brain->setIdea(b->getIdea(i), i);
}

std::ostream&	operator<<(std::ostream& os, Cat const & an)
{
	os << an.getType() << std::endl;
	return (os);
}