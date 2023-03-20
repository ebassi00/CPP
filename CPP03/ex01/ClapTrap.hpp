/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebassi <ebassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 15:13:11 by ebassi            #+#    #+#             */
/*   Updated: 2022/10/06 16:30:10 by ebassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <string>
#include <iostream>

class ClapTrap {

public:
	ClapTrap(void);
	ClapTrap(std::string name);
	ClapTrap(ClapTrap const & rhs);
	virtual ~ClapTrap();
	ClapTrap&	operator=(ClapTrap const & rhs);
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	std::string	getName(void);
	int	getHealth(void);
	int	getEnergy(void);
	int	getAttackDamage(void);

protected:
	std::string _name;
	static const int	_maxHealth = 100;
	static const int	_maxEnergy = 50;
	static const int	_max_atk_damage = 20;
	int			_health;
	int			_energy;
	int			_atk_damage;
};

#endif