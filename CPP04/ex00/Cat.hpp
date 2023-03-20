/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebassi <ebassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 18:19:18 by ebassi            #+#    #+#             */
/*   Updated: 2022/10/06 18:34:32 by ebassi           ###   ########.fr       */
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
	Cat&	operator=(Cat const & rhs);

};

std::ostream&	operator<<(std::ostream& os, Cat const & c);

#endif