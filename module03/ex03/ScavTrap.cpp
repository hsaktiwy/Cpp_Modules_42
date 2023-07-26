/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsaktiwy <hsaktiwy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 10:21:33 by hsaktiwy          #+#    #+#             */
/*   Updated: 2023/07/26 13:40:10 by hsaktiwy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap(): ClapTrap()
{
	std::cout << "ScavTrap Default Constructor\n";
	HitPoint = 100;
	Energie_p = 50;
	Attack_damage = 20;
}

ScavTrap::ScavTrap(std::string Name): ClapTrap(Name)
{
	std::cout << "ScavTrap Naming Constructor\n";
	HitPoint = 100;
	Energie_p = 50;
	Attack_damage = 20;
}

ScavTrap::ScavTrap(const ScavTrap& object)
{
	std::cout << "ScavTrap Copy Constructor\n";
	*this = object;
}
ScavTrap& ScavTrap::operator=(const ScavTrap& object)
{
	std::cout << "ScavTrap Assignment operator overload\n";
	if (this != &object)
	{
		this->Attack_damage = object.Attack_damage;
		this->Energie_p = object.Energie_p;
		this->HitPoint = object.HitPoint;
		this->Name = object.Name;
	}
	return (*this);
}
ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Default Destructor\n"; 
}

void ScavTrap::attack(const std::string& target)
{
	if (Energie_p > 0 &&  HitPoint  > 0)
	{
		std::cout << "ScavTrap " << Name << " attacks " << target;
		std::cout << ", causing " << Attack_damage << " points of damage!" << std::endl;
		Energie_p--;
	}
	else if (HitPoint == 0)
		std::cout << "ScavTrap " << Name << " can't attack (have 0 Hit point)!" << std::endl;
	else
		std::cout << "ScavTrap " << Name << " can't attack (out off the Energie)!\n";
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap is now in Gate keeper mode\n";
}