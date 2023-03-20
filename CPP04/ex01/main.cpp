/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebassi <ebassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 18:17:11 by ebassi            #+#    #+#             */
/*   Updated: 2022/10/07 16:04:58 by ebassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int	main()
{
	Animal	*arr[50];
	Dog		original;
	original.getBrain()->setIdea("prova", 10);
	Dog		copy(original);
	int		i;

	i = -1;
	while (++i < 50)
	{
		if (!(i % 2))
			arr[i] = new Dog();
		else
			arr[i] = new Cat();
	}
	std::cout << "This is the original brain: " << std::endl;
	original.printBrain();
	std::cout << "This is the copy brain: " << std::endl;
	copy.printBrain();
	i = -1;
	while (++i < 50)
		delete arr[i];
	return (0);
}