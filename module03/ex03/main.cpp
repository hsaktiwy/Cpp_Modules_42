/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsaktiwy <hsaktiwy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 18:50:47 by hsaktiwy          #+#    #+#             */
/*   Updated: 2023/07/26 14:29:17 by hsaktiwy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <iostream>

int main()
{
	DiamondTrap b,a("B0021"),c("O0098");
	int n = -1;

	b = c;
	b.attack("THE VOID");
	a.attack("O0098");
	c.takeDamage(70);
	c.attack("BOO21");
	a.takeDamage(100);
	a.beRepaired(3);
	while (++n < 10)
		c.beRepaired(1);
	a.guardGate();
	a.highFivesGuys();
	a.whoAmI();
}