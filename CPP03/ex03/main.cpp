/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebassi <ebassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 15:13:12 by ebassi            #+#    #+#             */
/*   Updated: 2022/10/06 16:48:06 by ebassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main( void )
{
	{
		DiamondTrap diamTrap("diamTrap");
		diamTrap.attack("Handsome Jack");
		diamTrap.takeDamage(6);
		diamTrap.beRepaired(4);
		diamTrap.takeDamage(3);
		diamTrap.guardGate();
		diamTrap.beRepaired(8);
		diamTrap.takeDamage(17);
		diamTrap.whoAmI();
	}
}