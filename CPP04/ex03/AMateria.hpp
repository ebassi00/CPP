/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebassi <ebassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 16:15:32 by ebassi            #+#    #+#             */
/*   Updated: 2022/10/10 14:33:25 by ebassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <string>
#include <iostream>
#include "Character.hpp"
#include "MateriaSource.hpp"

class Character;
class ICharacter;
class MateriaSource;
class IMateriaSource;

class AMateria
{

public:
	AMateria(void);
	AMateria(std::string const & type);
	AMateria(AMateria const & rhs);
	AMateria& operator=(AMateria const & rhs);
	virtual ~AMateria(void);
	std::string const & getType() const; //Returns the materia type
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target) = 0;

protected:
	std::string _type;
};

#endif