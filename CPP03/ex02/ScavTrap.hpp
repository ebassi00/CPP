/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebassi <ebassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 15:50:01 by ebassi            #+#    #+#             */
/*   Updated: 2022/10/06 16:30:34 by ebassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{

public:
	ScavTrap();
	ScavTrap(std::string const name);
	ScavTrap(ScavTrap const & src);
	virtual ~ScavTrap();
	ScavTrap&	operator=(ScavTrap const & rhs);
	void		attack(std::string const & target);
	void		guardGate();

};

#endif