/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebassi <ebassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 18:17:36 by ebassi            #+#    #+#             */
/*   Updated: 2023/03/20 17:57:44 by ebassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <string>
#include <iostream>

class Animal
{

public:
	Animal(void);
	Animal(Animal const & rhs);
	virtual ~Animal();
	Animal&	operator=(Animal const & rhs);
	virtual void makeSound(void) const;
	std::string getType(void) const;
	void setType(std::string type);

protected:
	std::string _type;
};

std::ostream&	operator<<(std::ostream& os, Animal const & an);

#endif