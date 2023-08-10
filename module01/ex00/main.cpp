/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsaktiwy <hsaktiwy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 14:08:30 by hsaktiwy          #+#    #+#             */
/*   Updated: 2023/08/08 14:36:51 by hsaktiwy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"
#include <string>

int	main()
{
	std::string name1 = "Zoro";
	std::string name2 = "Napa"; 
	Zombie *zombie = newZombie(name2);
	randomChump(name1);
	zombie->announce();
	delete zombie;
	return 0;
}