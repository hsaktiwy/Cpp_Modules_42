/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsaktiwy <hsaktiwy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 13:03:22 by hsaktiwy          #+#    #+#             */
/*   Updated: 2023/07/25 08:43:57 by hsaktiwy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
int main( void ) {
	Fixed e = Fixed(7.5f), f = Fixed(2.1f);
	// Fixed s = Fixed(0);
	std::cout << "e + f:" << (e + f).toFloat() << std::endl;
	std::cout << "e - f:" << (e - f).toFloat() << std::endl;
	std::cout << "e * f:" << (e * f).toFloat() << std::endl;
	std::cout << "e / f:" << (e / f).toFloat() << std::endl;
	// std::cout << "e / f:" << (e / s).toFloat() << std::endl;
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;

	return 0;
}
