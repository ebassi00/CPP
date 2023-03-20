/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebassi <ebassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 18:17:11 by ebassi            #+#    #+#             */
/*   Updated: 2022/10/06 18:47:51 by ebassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int	main()
{
	const	Animal* meta = new Animal();
	const	Animal* j = new Dog();
	const	Animal* i = new Cat();
	const	WrongAnimal* a = new WrongCat();
	
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << a->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();
	a->makeSound();
	std::cout << "I am i, I am a " << i->getType() << " and my makeSound says: ";
	i->makeSound();
	std::cout << "I am j, I am a " << j->getType() << " and my makeSound says: ";
	j->makeSound();
	std::cout << "I am a, I am a " << a->getType() << " and my makeSound says: ";
	a->makeSound();
	delete meta;
	delete j;
	delete i;
	delete a;
	return (0);
}