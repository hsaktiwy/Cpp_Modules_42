/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsaktiwy <hsaktiwy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 08:57:40 by hsaktiwy          #+#    #+#             */
/*   Updated: 2023/08/17 15:42:13 by hsaktiwy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include <iostream>

Point::Point(): x(), y()
{
	std::cout << "Default constructor\n";
}

Point::Point(const float a, const float b): x(a), y(b)
{
	std::cout << "Float constructor\n";
}

Point::Point(const Point& object): x(object.x), y(object.y)
{
}

Point& Point::operator=(const Point& object) 
{
	if (this != &object)
	{
		// ??
		std::cout << "in Point assigned operator\n";
		(Fixed&)this->x = object.x;// why not working without reffrence ??? Question to answer
		(Fixed&)this->y = object.y;
	}
	return (*this);
}

Point::~Point()
{
	std::cout << "Default Destructor\n";
}

Fixed Point::getX() const
{
	return (x);
}

Fixed Point::getY() const
{
	return (y);
}
