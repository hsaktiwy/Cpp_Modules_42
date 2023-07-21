/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsaktiwy <hsaktiwy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 13:40:32 by hsaktiwy          #+#    #+#             */
/*   Updated: 2023/07/21 15:22:01 by hsaktiwy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>


void	Zombie::setName(std::string t_name)
{
	name = t_name;	
}

Zombie::Zombie()
{
	
}

Zombie::~Zombie()
{
	std::cout << "Zombie : " << name << " is Killed!" << std::endl;
}
void	Zombie::announce( void )
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}