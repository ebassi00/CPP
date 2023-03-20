/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebassi <ebassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 18:51:06 by ebassi            #+#    #+#             */
/*   Updated: 2022/10/07 15:50:33 by ebassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <string>
#include <iostream>

class Brain
{
	
public:
	Brain();
	Brain(Brain const & src);
	virtual ~Brain();
	Brain& operator=(Brain const & rhs);
	std::string	getIdea(int i) const;
	void setIdea(std::string s, int i);

private:
	std::string _ideas[100];

};

#endif