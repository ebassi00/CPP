/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebassi <ebassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 15:49:59 by ebassi            #+#    #+#             */
/*   Updated: 2023/03/20 16:55:31 by ebassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	this->_name = "Default";
	this->_health = _maxHealth;
	this->_energy = _maxEnergy;
	this->_atk_damage = _max_atk_damage;
	std::cout << "ScavTrap: Default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
	this->_name = name;
	this->_health = _maxHealth;
	this->_energy = _maxEnergy;
	this->_atk_damage = _max_atk_damage;
	std::cout << "ScavTrap: Name constructor called" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const & src)
{
	*this = src;
	std::cout << "ScavTrap " << this->getName() << " copy constructor has been called" << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap " << this->getName() << " destructor has been called" << std::endl;
}


ScavTrap& ScavTrap::operator=(ScavTrap const & equals) {
	this->_name = equals._name;
	this->_health = equals._health;
	this->_energy = equals._energy;
	this->_atk_damage = equals._atk_damage;
	return (*this);
}

void ScavTrap::attack(const std::string& target)
{
	if (!getHealth() || !getEnergy())
	{
		std::cout << "No points to attack!" << std::endl;
		return ;
	}
	else
		this->_energy--;
	this->_atk_damage++;
	std::cout << "ScavTrap " << getName() << " attacks " << target << ", causing " << getAttackDamage() << " points of damage!" << std::endl;
}

void ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap is in Gate keeper mode!" << std::endl;
}