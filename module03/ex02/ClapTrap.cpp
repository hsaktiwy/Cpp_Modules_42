/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsaktiwy <hsaktiwy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 17:55:54 by hsaktiwy          #+#    #+#             */
/*   Updated: 2023/07/26 13:38:47 by hsaktiwy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap()
{
	std::cout << "ClapTrap Default Constructor\n";
	HitPoint = 10;
	Energie_p = 10;
	Attack_damage = 0;
}

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "ClapTrap Naming Constructor\n";
	Name = name; 
	HitPoint = 10;
	Energie_p = 10;
	Attack_damage = 0;
}

ClapTrap::ClapTrap(const ClapTrap& object)
{
	std::cout << "ClapTrap Copy Constructor\n";
	*this = object;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& object)
{
	std::cout << "ClapTrap Assignment operator overload\n";
	if (this != &object)
	{
		this->Name = object.Name;
		this->HitPoint = object.HitPoint;
		this->Energie_p = object.Energie_p;
		this->Attack_damage = object.Attack_damage;
	}
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap Default Destructor\n"; 
}

void	ClapTrap::attack(const std::string& target)
{
	if (Energie_p > 0 &&  HitPoint  > 0)
	{
		std::cout << "ClapTrap " << Name << " attacks " << target;
		std::cout << ", causing " << Attack_damage << " points of damage!" << std::endl;
		Energie_p--;
	}
	else if (HitPoint == 0)
		std::cout << "ClapTrap " << Name << " can't attack (have 0 Hit point)!" << std::endl;
	else
		std::cout << "ClapTrap " << Name << " can't attack (out off the Energie)!\n";
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (HitPoint  > 0)
	{
		std::cout << "ClapTrap " << Name << " tack " << amount << " damage!" << std::endl;
		if (HitPoint - amount < 0)
			HitPoint = 0;
		else
			HitPoint -= amount;
	}
	else
		std::cout << "ClapTrap " << Name << " can tack no more damage (0 hit point)!" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (Energie_p > 0 &&  HitPoint  > 0)
	{
		std::cout << "ClapTrap " << Name << " repaire " << amount << " hit points!" << std::endl;
		HitPoint += amount;
		Energie_p--;
	}
	else if (HitPoint == 0)
		std::cout << "ClapTrap " << Name << " noting to repaire(0 hit point)!" << std::endl;
	else
		std::cout << "ClapTrap " << Name << " can't be repaire (out off the Energie!)\n";
}
