/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsaktiwy <hsaktiwy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 15:11:03 by hsaktiwy          #+#    #+#             */
/*   Updated: 2023/07/22 15:37:07 by hsaktiwy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>
#include <string>

int main()
{
	Harl harl;
	void (Harl::*ptrharl)(std::string);
	ptrharl = &Harl::complaine;
	(harl.*ptrharl)("DEBUG");
	(harl.*ptrharl)("ERROR");
	(harl.*ptrharl)("WARNING");
	(harl.*ptrharl)("INFO");
	(harl.*ptrharl)("lol");
}