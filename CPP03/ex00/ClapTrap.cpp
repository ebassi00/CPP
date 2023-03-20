/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebassi <ebassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 15:13:03 by ebassi            #+#    #+#             */
/*   Updated: 2022/10/06 15:46:48 by ebassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _name("Default"), _health(_maxHealth), _energy(_maxEnergy), _atk_damage(_max_atk_damage)
{
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _health(_maxHealth), _energy(_maxEnergy), _atk_damage(_max_atk_damage)
{
	std::cout << "Name constructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const & rhs)
{
	std::cout << "ClapTrap " << getName() << " has been copy constructed!" << std::endl;
	*this = rhs;	
}

ClapTrap&	ClapTrap::operator=(ClapTrap const & rhs)
{
	if (this == &rhs)
		return (*this);
	this->_name = rhs._name;
	this->_health = rhs._health;
	this->_energy = rhs._energy;
	this->_atk_damage = rhs._atk_damage;
	std::cout << "ClapTrap " << this->getName() << " has been destroyed!" << std::endl;
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if (!getHealth() || !getEnergy())
	{
		std::cout << "No points to attack!" << std::endl;
		return ;
	}
	else
		this->_energy--;
	this->_atk_damage++;
	std::cout << "ClapTrap " << getName() << " attacks " << target << ", causing " << getAttackDamage() << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (!getHealth())
	{
		std::cout << "You are already dead!" << std::endl;
		return ;
	}
	if (getHealth() - amount <= 0)
		this->_health = 0;
	else
		this->_health -= amount;
	std::cout << this->_name << " lost " << amount << " HP points! " << getHealth() << " remaining " << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (!getHealth() || !getEnergy())
	{
		std::cout << "No points to repair!" << std::endl;
		return;
	}
	else
		this->_energy--;
	if (this->_health + amount > this->_maxHealth)
		this->_health = this->_maxHealth;
	else
		this->_health += amount;
	std::cout << this->_name << " gained " << amount << " HP points! " << getHealth() << " remaining " << std::endl;
}

std::string	ClapTrap::getName(void)
{
	return (this->_name);
}

int	ClapTrap::getHealth(void)
{
	return (this->_health);
}

int	ClapTrap::getEnergy(void)
{
	return (this->_energy);
}

int	ClapTrap::getAttackDamage(void)
{
	return (this->_atk_damage);
}