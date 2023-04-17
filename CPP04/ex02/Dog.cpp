/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebassi <ebassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 18:37:22 by ebassi            #+#    #+#             */
/*   Updated: 2023/03/20 18:05:32 by ebassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
	std::cout << "Dog constructor called!" << std::endl;
	this->setType("Dog");
	this->_brain = new Brain();
}

Dog::Dog(Dog const & rhs)
{
	std::cout << "Copy construcotr for Dog called!" << std::endl;
	this->setType(rhs.getType());
	this->_brain = new Brain();
	copyBrain(rhs.getBrain());
}

Dog::~Dog(void)
{
	std::cout << "Destructor called for Dog!" << std::endl;
	delete this->_brain;
}

Dog& Dog::operator=(Dog const & rhs)
{
	std::cout << "Copy assignment operator called on Dog" << std::endl;
	if (this == &rhs)
		return (*this);
	this->setType(rhs.getType());
	return (*this);
}

void	Dog::printBrain(void) const
{
	int	i;

	i = -1;
	while (++i < 100)
		std::cout << i << " = " << this->_brain->getIdea(i) << std::endl;
}

void Dog::copyBrain(Brain* b)
{
	int	i;

	i = -1;
	while (++i < 100)
		this->_brain->setIdea(b->getIdea(i), i);
}

Brain*	Dog::getBrain(void) const
{
	return (this->_brain);
}

void    Dog::makeSound( void ) const
{
    std::cout << "Woof!" << std::endl;
}

std::ostream&	operator<<(std::ostream& os, Dog const & an)
{
	os << an.getType() << std::endl;
	return (os);
}