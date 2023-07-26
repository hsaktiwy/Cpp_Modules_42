/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsaktiwy <hsaktiwy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 18:50:47 by hsaktiwy          #+#    #+#             */
/*   Updated: 2023/07/26 13:11:03 by hsaktiwy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

int main()
{
	ScavTrap b,a("B0021"),c("O0098");
	int n = -1;

	b = c;
	b.attack("THE VOID");
	a.attack("O0098");
	c.takeDamage(70);
	c.guardGate();
	c.attack("BOO21");
	a.takeDamage(100);
	a.beRepaired(3);
	while (++n < 10)
		c.beRepaired(1);
}