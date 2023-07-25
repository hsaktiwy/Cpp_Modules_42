/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsaktiwy <hsaktiwy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 13:03:22 by hsaktiwy          #+#    #+#             */
/*   Updated: 2023/07/25 10:11:15 by hsaktiwy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
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
	
	std::cout << "/////////////////Point \n";
	Point c, d(2.75f, 5.5f);
	std::cout << "c(" << c.getX() << "," << c.getY() << ")" << std::endl;
	std::cout << "d(" << d.getX() << "," << d.getY() << ")" << std::endl;
	return 0;
}
