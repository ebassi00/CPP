/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebassi <ebassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 14:08:55 by ebassi            #+#    #+#             */
/*   Updated: 2022/10/06 15:08:27 by ebassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int	main()
{
	Point a(2, 4);
	Point b(3, 0);
	Point c(4, 4);
	Point d(2, 1);

	std::cout << bsp(a, b, c, d) << std::endl;

	Point const	e(2, 0);

	std::cout << bsp(a, b, c, e) << std::endl;

	Point const	f(0, 2);

	std::cout << bsp(a, b, c, f) << std::endl;

	Point const	g(3, 3);

	std::cout << bsp(a, b, c, g) << std::endl;

	std::cout << "Point(15, 100) in Triangle 10.5 - 203, 10 - 20, 135 - 20" << std::endl << "Result: "
	<< bsp(Point(10,20), Point(10.5,203), Point(135,20),  Point(15, 100)) << std::endl;
	std::cout << "Point(5, 100) in Triangle 10.5 - 203, 10 - 20, 135 - 20" << std::endl << "Result: "
	<< bsp(Point(10,20), Point(10.5,203), Point(135,20),  Point(5, 100)) << std::endl;
	std::cout << "Point(15, 1) in Triangle 10.5 - 203, 10 - 20, 135 - 20" << std::endl << "Result: "
	<< bsp(Point(10,20), Point(10.5,203), Point(135,20),  Point(15, 1)) << std::endl;

	return (0);
}