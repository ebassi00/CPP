/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebassi <ebassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 16:04:57 by ebassi            #+#    #+#             */
/*   Updated: 2022/10/06 16:10:14 by ebassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
	this->_name = "Default";
	this->_health = _maxHealth;
	this->_energy = _maxEnergy;
	this->_atk_damage = _max_atk_damage;
	std::cout << "Default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name)
{
	this->_name = name;
	this->_health = _maxHealth;
	this->_energy = _maxEnergy;
	this->_atk_damage = _max_atk_damage;
	std::cout << "Name constructor called" << std::endl;
}

FragTrap::FragTrap(FragTrap const & src)
{
	*this = src;
	std::cout << "FragTrap " << this->getName() << " copy constructor has been called" << std::endl;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap " << this->getName() << " destructor has been called" << std::endl;
}

FragTrap& FragTrap::operator=(FragTrap const & equals) {
	this->_name = equals._name;
	this->_health = equals._health;
	this->_energy = equals._energy;
	this->_atk_damage = equals._atk_damage;
	return (*this);
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "I, " << this->getName() << " FragTrap, am asking you for a friendly and positive high five. Not so much in the mood, btw" << std::endl;
}