/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsaktiwy <hsaktiwy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 15:11:03 by hsaktiwy          #+#    #+#             */
/*   Updated: 2023/08/10 19:46:56 by hsaktiwy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>
#include <string>

int main()
{
	Harl harl;
	harl.complaine("DEBUG");
	harl.complaine("ERROR");
	harl.complaine("WARNING");
	harl.complaine("INFO");
	harl.complaine("lol");
}