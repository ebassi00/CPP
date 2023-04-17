/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebassi <ebassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 18:18:33 by ebassi            #+#    #+#             */
/*   Updated: 2023/03/20 18:05:46 by ebassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include <iostream>

class Dog : public Animal
{

public:
	Dog();
	Dog(Dog const & rhs);
	virtual ~Dog();
	Dog& operator=(Dog const & rhs);
	void printBrain(void) const;
	void makeSound(void) const;
	Brain* getBrain(void) const;
	void copyBrain(Brain* b);

private:
	Brain* _brain;
};

#endif