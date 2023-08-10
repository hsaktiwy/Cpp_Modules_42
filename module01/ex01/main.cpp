/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsaktiwy <hsaktiwy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 15:24:03 by hsaktiwy          #+#    #+#             */
/*   Updated: 2023/08/08 14:41:20 by hsaktiwy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	std::string name = "Apocalypses";
	Zombie *horde = zombieHorde(4, name);
	for(int i = 0; i < 4; i++)
		horde->announce();
	delete[] horde;
	return (0);
}