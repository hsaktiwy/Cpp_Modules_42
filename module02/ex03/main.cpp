/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsaktiwy <hsaktiwy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 13:03:22 by hsaktiwy          #+#    #+#             */
/*   Updated: 2023/08/17 14:54:02 by hsaktiwy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include <iostream>
bool bsp( Point const a, Point const b, Point const c, Point const point);

// void leaks_l( void )
// {
// 	system("leaks a.out");
// }

int main( void ) {
	// atexit(leaks_l);
	Point a,b = Point(1,1),c = Point(b), d;
	d = b;
	std::cout << "a : (" << c.getY() << "," << c.getX() << ")\n";
	std::cout << "b : (" << b.getY() << "," << b.getX() << ")\n";
	std::cout << "c : (" << c.getY() << "," << c.getX() << ")\n";
	std::cout << "d : (" << d.getX().toFloat() << "," << d.getX().toFloat() << ")\n";

	Point e(0,0),f(3,3),g(6,0);
	Point i(1,0),h(0,1), j(1.5f,1.5f), k(3,3.1f);
	std::cout << "x = " << e.getX() << " y = " << e.getY() << ": " << (bsp(e,f,g,e) ? "True" : "False" ) << std::endl;
	std::cout << "x = " << i.getX() << " y = " << i.getY() << ": " << (bsp(e,f,g,i) ? "True" : "False" ) << std::endl;
	std::cout << "x = " << h.getX() << " y = " << h.getY() << ": " << (bsp(e,f,g,h) ? "True" : "False" ) << std::endl;
	std::cout << "x = " << j.getX() << " y = " << j.getY() << ": " << (bsp(e,f,g,j) ? "True" : "False" ) << std::endl;
	std::cout << "x = " << k.getX() << " y = " << k.getY() << ": " << (bsp(e,f,g,k) ? "True" : "False" ) << std::endl;
	return 0;
}
