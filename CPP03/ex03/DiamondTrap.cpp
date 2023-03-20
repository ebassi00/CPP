/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebassi <ebassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 16:12:56 by ebassi            #+#    #+#             */
/*   Updated: 2022/10/06 16:47:44 by ebassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void)
{
	this->_name = "Default;";
	this->_health = FragTrap::_health;
	this->_energy = ScavTrap::_energy;
	this->_atk_damage = FragTrap::_atk_damage;
	ClapTrap::_name = this->_name + "_clap_name";
	std::cout << "Default DiamondTrap constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string const name)
{
	this->_name = name;
	this->_health = FragTrap::_health;
	this->_energy = ScavTrap::_energy;
	this->_atk_damage = FragTrap::_atk_damage;
	ClapTrap::_name = this->_name + "_clap_name";
	std::cout << "DiamondTrap " << name << " constructor with name parameter called" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const & src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "Diamond destructor called" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(DiamondTrap const & rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this == &rhs)
		return (*this);
	this->_name = rhs.ClapTrap::_name;
	this->_health = rhs.FragTrap::_health;
	this->_energy = rhs.ScavTrap::_energy;
	this->_atk_damage = rhs.FragTrap::_atk_damage;
	return (*this);
}

void	DiamondTrap::attack(std::string const &target)
{
	if (!getEnergy() || !getHealth())
	{
		std::cout << "No more point to for DiamondTrap attack!" << std::endl;
		return ;
	}
	else
		this->_energy--;
	this->_atk_damage++;
	std::cout << "DiamondTrap " << getName() << " attacks " << target << ", causing " << getAttackDamage() << " points of damage!" << std::endl;
}

void DiamondTrap::whoAmI(void)
{
	std::cout << "My name: " << this->_name << " , my ClapTrap name: " << ClapTrap::getName() << std::endl;
}