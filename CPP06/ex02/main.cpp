/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebassi <ebassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 14:49:54 by ebassi            #+#    #+#             */
/*   Updated: 2022/10/14 14:49:58 by ebassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Classes.hpp"

int	main()
{
	Base*	n;

	n = generate();
	identify(n);
	identify(*n);
	return (0);
}