/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lol <lol@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 12:52:56 by hsaktiwy          #+#    #+#             */
/*   Updated: 2023/07/24 13:53:48 by lol              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed()
{
	std::cout << "Default constructor called\n";
	fixed = 0;
}

Fixed::Fixed(const int value)
{
	std::cout << "Int constructor called\n";
	fixed = value * (1 << NUM_FRACTION_INTS);	
}

Fixed::Fixed(const float value)
{
	std::cout << "Float constructor called\n";
	fixed = roundf((value * (1 << NUM_FRACTION_INTS)));
}

Fixed::Fixed(const Fixed& to_copy)
{
	std::cout << "Copy constructor called\n";
	*this = to_copy;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called\n";
}

Fixed& Fixed::operator=(const Fixed& other)
{
	std::cout << "Copy assignment operator called\n";
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
	// std::cout << "getRawBits member function called\n"; they are ignore due to the output exemple gaven
	return (fixed);
}

void Fixed::setRawBits( int const raw )
{
	// std::cout << "setRawBits member function called\n"; same as getRawbits
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

