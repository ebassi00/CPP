/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebassi <ebassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 19:14:46 by ebassi            #+#    #+#             */
/*   Updated: 2022/10/12 19:23:12 by ebassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZATION_HPP
# define SERIALIZATION_HPP

#include <iostream>
#include <cstdint>

class Data
{
public:
	Data(void);
	Data(int n);
	Data(Data const &rhs);
	Data &operator=(Data const &rhs);
	~Data(void);

	int getValue(void);
private:
	int _value;
};

Data* deserialize(uintptr_t raw);
uintptr_t serialize(Data* ptr);

#endif