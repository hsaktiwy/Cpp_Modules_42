/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsaktiwy <hsaktiwy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 16:24:10 by hsaktiwy          #+#    #+#             */
/*   Updated: 2023/07/21 17:37:38 by hsaktiwy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string t_type)
{
	type = t_type;
}

Weapon::Weapon()
{
	type = "";
}

Weapon::~Weapon()
{
}

void	Weapon::setType(std::string n_type)
{
	type = n_type;
}

std::string Weapon::getType()
{
	return (type);
}