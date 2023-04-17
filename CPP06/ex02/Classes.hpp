/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Classes.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebassi <ebassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 14:25:05 by ebassi            #+#    #+#             */
/*   Updated: 2022/10/14 14:42:25 by ebassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASSES_HPP
# define CLASSES_HPP

#include <cstdlib>
#include <iostream>
#include <ctime>

class Base
{

	public:
		virtual ~Base(void);
};

class A : public Base
{

};

class B : public Base
{

};

class C : public Base
{

};

Base * generate(void);
void identify(Base* p);
void identify(Base& p);

#endif