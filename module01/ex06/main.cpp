/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsaktiwy <hsaktiwy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 15:51:13 by hsaktiwy          #+#    #+#             */
/*   Updated: 2023/07/22 17:28:01 by hsaktiwy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Harl.hpp"

int main(int argc, char **argv)
{
	Harl harl;
	if (argc == 2)
	{
		std::string level = argv[1];
		harl.complaine(level);
	}else
		std::cout << "We only accept One argument!!!!" << std::endl;
	return 0; 
}