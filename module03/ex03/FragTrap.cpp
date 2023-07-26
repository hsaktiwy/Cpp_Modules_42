/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsaktiwy <hsaktiwy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 12:56:34 by hsaktiwy          #+#    #+#             */
/*   Updated: 2023/07/26 13:39:50 by hsaktiwy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap()
{
	std::cout << "FragTrap Default Constructor\n";
	HitPoint = 100;
	Energie_p = 100;
	Attack_damage = 30;
}

FragTrap::FragTrap(std::string Name): ClapTrap(Name)
{
	std::cout << "FragTrap Naming Constructor\n";
	HitPoint = 100;
	Energie_p = 100;
	Attack_damage = 30;
}

FragTrap::FragTrap(const FragTrap& object)
{
	std::cout << "FragTrap Copie Constructor\n";
	*this = object;
}

FragTrap&	FragTrap::operator=(const FragTrap& object)
{
	std::cout << "FragTrap Assignment operator\n";
	if (this != &object)
	{
		this->Attack_damage = object.Attack_damage;
		this->Energie_p = object.Energie_p;
		this->HitPoint = object.HitPoint;
		this->Name = object.Name;
	}
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap Default Destructor\n";
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap demand high fives resquest\n";
}