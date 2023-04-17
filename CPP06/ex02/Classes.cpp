/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Classes.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebassi <ebassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 14:42:58 by ebassi            #+#    #+#             */
/*   Updated: 2023/03/22 16:41:51 by ebassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Classes.hpp"

Base::~Base(void) {}

Base *generate(void)
{
	srand((unsigned)time(NULL));
	int idx = rand() % 3;
	
	switch (idx)
	{
		case 0:
			return (new A());
		case 1:
			return (new B());
		case 2:
			return (new C());
	}
	return (0);
}

void identify(Base* p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "A class" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B class" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C class" << std::endl;
}

void identify(Base& p)
{
	A	c1;
	B	c2;
	C	c3;
	
	try
	{
		c1 = dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
	}
	catch(const std::bad_cast& e) {}

	try
	{
		c2 = dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
	}
	catch(const std::bad_cast& e) {}
	
	try
	{
		c3 = dynamic_cast<C&>(p);
		std::cout << "C" << std::endl;
	}
	catch(const std::bad_cast& e) {}
}