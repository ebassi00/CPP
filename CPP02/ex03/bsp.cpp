/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebassi <ebassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 13:18:29 by ebassi            #+#    #+#             */
/*   Updated: 2022/10/06 15:09:22 by ebassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	float ret[3];
	float x;
	float y;

	ret[0] = (point.getX().toFloat() - a.getX().toFloat()) * (c.getY().toFloat() - a.getY().toFloat()) - (point.getY().toFloat() - a.getY().toFloat()) * (c.getX().toFloat() - a.getX().toFloat());
	ret[1] = (a.getX().toFloat() - point.getX().toFloat()) * (b.getY().toFloat() - a.getY().toFloat()) - (a.getY().toFloat() - point.getY().toFloat()) * (b.getX().toFloat() - a.getX().toFloat());
	ret[2] = (b.getX().toFloat() - a.getX().toFloat()) * (c.getY().toFloat() - a.getY().toFloat()) - (b.getY().toFloat() - a.getY().toFloat()) * (c.getX().toFloat() - a.getX().toFloat());
	x = ret[0] / ret[2];
	y = ret[1] / ret[2];
	return (x > 0 && y > 0 && x + y < 1);
}
