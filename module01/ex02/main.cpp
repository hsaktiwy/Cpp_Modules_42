/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsaktiwy <hsaktiwy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 15:54:19 by hsaktiwy          #+#    #+#             */
/*   Updated: 2023/07/21 16:14:09 by hsaktiwy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main()
{
	std::string ini = "HI THIS IS BRAIN";
	std::string* strPTR = &ini;
	std::string& strREF = ini;
	std::cout << "The memory address of the string variable :" << &ini << std::endl;
	std::cout << "The memory address held by stringPTR:" << strPTR << std::endl;
	std::cout << "The memory address held by stringREF:" << &strREF << std::endl;
	std::cout << "The value of the string variable:" << ini << std::endl;
	std::cout << "The value pointed to by stringPTR:" << *strPTR << std::endl;
	std::cout << "The value pointed to by stringREF:" << strREF << std::endl;
}