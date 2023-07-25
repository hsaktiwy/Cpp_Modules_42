/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsaktiwy <hsaktiwy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 18:50:47 by hsaktiwy          #+#    #+#             */
/*   Updated: 2023/07/25 19:02:05 by hsaktiwy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

int main()
{
	ClapTrap b,a("B0021"),c("O0098");
	int n = -1;

	b = c;
	b.attack("THE VOID");
	a.attack("O0098");
	c.takeDamage(3);
	c.attack("BOO21");
	a.takeDamage(10);
	a.beRepaired(3);
	while (++n < 10)
		c.beRepaired(1);
}