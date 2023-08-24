/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsaktiwy <hsaktiwy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 15:21:53 by hsaktiwy          #+#    #+#             */
/*   Updated: 2023/08/20 12:50:49 by hsaktiwy         ###   ########.fr       */
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
	*f = (a.getX() *(b.getY() - c.getY()) + b.getX() * (c.getY() - a.getY()) + c.getX() *(a.getY() - b.getY()));
	absolut(f);
	return (f);
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	Fixed *A, *P1, *P2, *P3;
	bool	in_triangle = false;

	A = area(a, b, c);
	P1 = area(point, b, c);
	P2 = area(a, point, c);
	P3 = area(a, b, point);
	if	(*P1 == 0 ||  *P2 == 0 || *P3 == 0)
		in_triangle = false;
	else if (*A == (*P1 + *P2 + *P3))
		in_triangle = true;
	else
		in_triangle = false;
	delete A;
	delete P1;
	delete P2;
	delete P3;
	return (in_triangle);
}