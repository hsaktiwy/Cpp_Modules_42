/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsaktiwy <hsaktiwy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 12:52:56 by hsaktiwy          #+#    #+#             */
/*   Updated: 2023/07/23 13:42:03 by hsaktiwy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed()
{
	std::cout << "Default constructor called\n";
	fixed = 0;
}

Fixed::Fixed(const Fixed& to_copy)
{
	std::cout << "Copy constructor called\n";
	this->fixed = to_copy.fixed;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called\n";
}

Fixed& Fixed::operator=(const Fixed& other)
{
	std::cout << "Copy assignment operator called";
	if (this != &other)
	{
		this->fixed = other.getRawBits();
	}
	return *this;
}

int Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called\n";
	return (fixed);
}

void Fixed::setRawBits( int const raw )
{
	std::cout << "setRawBits member function called\n";
	fixed = raw;
}
