/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsaktiwy <hsaktiwy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 13:44:30 by hsaktiwy          #+#    #+#             */
/*   Updated: 2023/07/26 14:45:34 by hsaktiwy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	std::cout << "DiamondTrap Default Constructor\n";
	HitPoint = FragTrap::HitPoint;
	Energie_p = ScavTrap::Energie_p;
	Attack_damage = this->FragTrap::Attack_damage;
}

DiamondTrap::DiamondTrap(std::string t_Name):ClapTrap(t_Name + "_clap_name"), FragTrap(t_Name), ScavTrap(t_Name) 
{
	std::cout << "DiamondTrap Naming Constructor\n";
	DiamondTrap::Name = t_Name;
	HitPoint = FragTrap::HitPoint;
	Energie_p = ScavTrap::Energie_p;
	Attack_damage = this->FragTrap::Attack_damage;
}

DiamondTrap::DiamondTrap(const DiamondTrap& object)
{
	std::cout << "DiamondTrap Copy Constructor\n";
	*this = object;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& object)
{
	std::cout << "DiamondTrap assignment operator\n";
	if (this != &object)
	{
		ClapTrap::Name = object.ClapTrap::Name;
		DiamondTrap::Name = object.DiamondTrap::Name;
		HitPoint = object.FragTrap::HitPoint;
		Energie_p = object.ScavTrap::Energie_p;
		Attack_damage = object.FragTrap::Attack_damage;
	}
	return (*this);
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "Diamond Default Destructor\n";
}

void	DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI()
{
	std::cout << "My name is " << DiamondTrap::Name << " while my ClapTrap name is " << ClapTrap::Name << std::endl;
}