/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebassi <ebassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 16:23:02 by ebassi            #+#    #+#             */
/*   Updated: 2022/10/07 16:37:52 by ebassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{

public:
	Ice();
	virtual ~Ice();
	Ice(Ice const & rhs);
	Ice& operator=(Ice const & rhs);
	AMateria *clone(void) const;
	void use(ICharacter& target);
};

#endif