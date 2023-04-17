/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebassi <ebassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 18:19:18 by ebassi            #+#    #+#             */
/*   Updated: 2023/03/20 18:05:53 by ebassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include <iostream>

class Cat : public Animal
{

public:
	Cat();
	Cat(Cat const & rhs);
	virtual ~Cat();
	Cat& operator=(Cat const & rhs);
	void printBrain(void) const;
	Brain* getBrain(void) const;
	void makeSound(void) const;
	void copyBrain(Brain* b);

private:
	Brain* _brain;
};

std::ostream&	operator<<(std::ostream& os, Cat const & c);

#endif