/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsaktiwy <hsaktiwy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 16:10:54 by hsaktiwy          #+#    #+#             */
/*   Updated: 2023/11/25 16:16:16 by hsaktiwy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
	{
		try
		{
			Bureaucrat b1("CEO", 23);
			Form f1("Contrat client C", 80, 79);
			// display form and ceo
			std::cout << b1 << "\n" << f1 << std::endl;
			// signe form f1
			b1.signForm(f1);
		}
		catch(std::exception &e)
		{
			std::cout << e.what()<< std::endl;
		}
	}
	std::cout << "///////////////////////////////////////////////////////////////////////////" << std::endl;

	{
		try
		{
			Bureaucrat b1("CEO", 90);
			Form f1("Contrat client C", 80, 79);
			// display form and ceo
			std::cout << b1 << "\n" << f1 << std::endl;
			// signe form f1
			b1.signForm(f1);
		}
		catch(std::exception &e)
		{
			std::cout << e.what()<< std::endl;
		}
	}
	std::cout << "///////////////////////////////////////////////////////////////////////////" << std::endl;
	{
		try
		{
			Bureaucrat b1("CEO", 90);
			Form f1("Contrat client C", 80, 79), f2;
			// display form and ceo
			f1 = f2;
			std::cout << b1 << "\n" << f1 << "\n" << f2 << std::endl;
			// signe form f1
			b1.signForm(f2);
			b1.signForm(f1);
		}
		catch(std::exception &e)
		{
			std::cout << e.what()<< std::endl;
		}
	}
	std::cout << "///////////////////////////////////////////////////////////////////////////" << std::endl;
	{
		try
		{
			Bureaucrat b1("CEO", 20);
			Form f1("Contrat client C", 80, 79);
			Form f2(f1);
			// display form and ceo
			std::cout << b1 << "\n" << f1 << "\n" << f2 << std::endl;
			// signe form f1
			b1.signForm(f2);
			b1.signForm(f1);
		}
		catch(std::exception &e)
		{
			std::cout << e.what()<< std::endl;
		}
	}
	return (0);
}