/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebassi <ebassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 18:39:13 by ebassi            #+#    #+#             */
/*   Updated: 2022/10/06 18:40:49 by ebassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <string>
#include <iostream>

class WrongAnimal
{

public:
	WrongAnimal(void);
	WrongAnimal(WrongAnimal const & rhs);
	virtual ~WrongAnimal();
	WrongAnimal& operator=(WrongAnimal const & rhs);
	void makeSound(void) const;
	std::string getType(void) const;
	void setType(std::string type);

protected:
	std::string _type;
};

std::ostream&	operator<<(std::ostream& os, WrongAnimal const & an);

#endif