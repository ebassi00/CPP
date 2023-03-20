/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebassi <ebassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 15:13:12 by ebassi            #+#    #+#             */
/*   Updated: 2022/10/06 15:47:38 by ebassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main()
{
	ClapTrap	first("first");
	ClapTrap	second("second");

	std::cout << std::endl << "These ClapTraps earn one attack damage point each time they attack a target" << std::endl << std::endl;
	first.attack(second.getName());
	second.takeDamage(first.getAttackDamage());
	std::cout << "Now ClapTrap second has " << second.getHealth() << " points of health and " << second.getEnergy() << " points of energy" << std::endl;
	second.attack(first.getName());
	first.takeDamage(second.getAttackDamage());
	std::cout << "Now ClapTrap first has " << first.getHealth() << " points of health and " << first.getEnergy() << " points of energy" << std::endl;
	first.beRepaired(10);
	std::cout << "Now ClapTrap first has " << first.getHealth() << " points of health and " << first.getEnergy() << " points of energy" << std::endl;
	first.attack(second.getName());
	second.takeDamage(first.getAttackDamage());
	std::cout << "Now ClapTrap second has " << second.getHealth() << " points of health and " << second.getEnergy() << " points of energy" << std::endl;
	second.beRepaired(5);
	std::cout << "Now ClapTrap second has " << second.getHealth() << " points of health and " << second.getEnergy() << " points of energy" << std::endl;
	return (0);
}