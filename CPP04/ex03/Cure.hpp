/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebassi <ebassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 16:22:29 by ebassi            #+#    #+#             */
/*   Updated: 2022/10/07 19:19:16 by ebassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{

public:
	Cure();
	virtual ~Cure();
	Cure(Cure const & rhs);
	Cure& operator=(Cure const & rhs);
	AMateria *clone(void) const;
	void use(ICharacter& target);
};

#endif