/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsaktiwy <hsaktiwy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 12:52:56 by hsaktiwy          #+#    #+#             */
/*   Updated: 2023/07/25 10:24:05 by hsaktiwy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed()
{
	fixed = 0;
}

Fixed::Fixed(const int value)
{
	fixed = value * (1 << NUM_FRACTION_INTS);	
}

Fixed::Fixed(const float value)
{
	fixed = roundf((value * (1 << NUM_FRACTION_INTS)));
}

Fixed::Fixed(const Fixed& to_copy)
{
	*this = to_copy;
}

Fixed::~Fixed()
{
}

Fixed& Fixed::operator=(const Fixed& other)
{
	if (this != &other)
	{
		this->fixed = other.getRawBits();
	}
	return *this;
}

std::ostream& operator<<(std::ostream& os, const Fixed& object)
{
	os << object.toFloat();
	return (os);
}


int Fixed::getRawBits( void ) const
{
	return (fixed);
}

void Fixed::setRawBits( int const raw )
{
	fixed = raw;
}

int		Fixed::toInt( void ) const
{
	return (fixed / (1 << NUM_FRACTION_INTS));
}

float	Fixed::toFloat( void ) const
{
	float devider = 1 << NUM_FRACTION_INTS;
	return (fixed / devider);
}

// 6 comparison ops < > <= >= == !=
bool Fixed::operator<=(const Fixed& other) const
{
	return (this->fixed <=other.fixed);
}

bool Fixed::operator<(const Fixed& other) const
{
	return (this->fixed <other.fixed);
}

bool Fixed::operator>=(const Fixed& other) const
{
	return (this->fixed >=other.fixed);
}

bool Fixed::operator>(const Fixed& other) const
{
	return (this->fixed >other.fixed);
}

bool Fixed::operator==(const Fixed& other) const
{
	return (this->fixed ==other.fixed);
}

bool Fixed::operator!=(const Fixed& other) const
{
	return (this->fixed !=other.fixed);
}

//4 operation + - * /

Fixed	Fixed::operator+(const Fixed& other) const
{
	int		v = this->fixed + other.fixed;
	Fixed	res;
	res.setRawBits(v);
	return (res);	
}

Fixed	Fixed::operator-(const Fixed& other) const
{
	int		v = this->fixed - other.fixed;
	Fixed	res;
	res.setRawBits(v);
	return (res);	
}

Fixed	Fixed::operator*(const Fixed& other) const
{
	long	v1,v2,r;

	v1 = this->fixed;
	v2 = other.fixed;
	r = (v1 * v2) / (1 << NUM_FRACTION_INTS);
	Fixed res;
	res.setRawBits(r);
	return (res);
}

Fixed	Fixed::operator/(const Fixed& other) const
{
	long v1,v2,r;

	v1 = this->fixed;
	v2 = other.fixed;
	r = ((v1*(1 << NUM_FRACTION_INTS))/v2);
	Fixed	res;
	res.setRawBits(r);
	return (res);
}

Fixed&	Fixed::operator++()
{
	this->fixed += 1;
	return (*this); 
}

Fixed&	Fixed::operator--()
{
	this->fixed -= 1;
	return (*this); 
}

Fixed	Fixed::operator++(int)
{
	Fixed	tmp(*this);
	this->fixed += 1;
	return (tmp);
}

Fixed	Fixed::operator--(int)
{
	Fixed	tmp(*this);
	this->fixed -= 1;
	return (tmp);
}

// min max

Fixed&	Fixed::min(Fixed& a, Fixed& b)
{
	if (a > b)
		return (b);
	else
		return (a);
}

Fixed&	Fixed::min(const Fixed& a, const Fixed& b)
{
	if (a > b)
		return ((Fixed&)b);
	else
		return ((Fixed&)a);	
}

Fixed&	Fixed::max(Fixed& a, Fixed& b)
{
	if (a > b)
		return (a);
	else
		return (b);	
}

Fixed&	Fixed::max(const Fixed& a, const Fixed& b)
{
	if (a > b)
		return ((Fixed&)a);
	else
		return ((Fixed&)b);
}
