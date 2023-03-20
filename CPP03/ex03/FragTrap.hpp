/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebassi <ebassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 16:04:58 by ebassi            #+#    #+#             */
/*   Updated: 2022/10/06 16:44:28 by ebassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ScavTrap.hpp"

class FragTrap : virtual public ClapTrap
{

public:
	FragTrap();
	FragTrap(std::string const name);
	FragTrap(FragTrap const & src);
	virtual ~FragTrap();
	FragTrap&	operator=(FragTrap const & rhs);
	void highFivesGuys(void);
};

#endif