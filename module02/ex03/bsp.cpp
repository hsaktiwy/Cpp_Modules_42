/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lol <lol@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 15:21:53 by hsaktiwy          #+#    #+#             */
/*   Updated: 2023/08/14 18:01:01 by lol              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

static void absolut(Fixed *v)
{
	if (v->toFloat() < 0)
		v->setRawBits(-1 * v->getRawBits());
}

static Fixed *area(Point const& a, Point const& b, Point const& c)
{
	Fixed *f =  new Fixed();
	*f = (a.getX() *(c.getY() - b.getY() + b.getX() * (c.getY() - a.getY()) + c.getX() *(b.getY() - a.getY())));
	absolut(f);
	return (f);
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	Fixed *A, *P1, *P2, *P3;
	bool	in_triangle;

	A = area(a, b, c);
	P1 = area(point, b, c);
	P2 = area(point,a , c);
	P3 = area(point,a , b);
	std::cout << A << "" << P1 << " " << P2 << " " << P3 << std::endl; 
	if (*A == (*P1 + *P2 + *P3))
		in_triangle = true;
	else
		in_triangle = false;
	delete A;
	delete P1;
	delete P2;
	delete P3;
	return (in_triangle);
}