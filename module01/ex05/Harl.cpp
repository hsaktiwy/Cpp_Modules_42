/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsaktiwy <hsaktiwy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 14:06:39 by hsaktiwy          #+#    #+#             */
/*   Updated: 2023/08/10 19:43:45 by hsaktiwy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

void	Harl::debug( void )
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void	Harl::info( void )
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning( void )
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error( void )
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;	
}

static unsigned int hash(const char *str)
{
	unsigned int hash = 0;
	int i = 0;
	int p = 1;

	while (i < 13 && str[i])
	{
		hash = hash + str[i] * p;
		p *= 7;
		i++;
	}
	return (hash);
}

void	Harl::complaine(std::string level)
{
	void (Harl::*ptrhrl) (void) = NULL;
	switch (hash(&level[0]))
	{
		case 203411:
			ptrhrl = &Harl::debug;
			break;
		case 31146:
			ptrhrl = &Harl::info;
			break;
		case 9870612:
			ptrhrl = &Harl::warning;
			break;
		case 228640:
			ptrhrl = &Harl::error;
			break;
		default:
			break;
	}
	if (ptrhrl)
		(this->*ptrhrl)();
}
