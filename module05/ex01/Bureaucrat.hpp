/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsaktiwy <hsaktiwy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 15:26:21 by hsaktiwy          #+#    #+#             */
/*   Updated: 2023/11/25 17:09:18 by hsaktiwy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <iostream>
#include <ostream>
#include <exception>
#include "Form.hpp"

class Form;
class Bureaucrat{
	private:
		const std::string  name;
		int grade;
	public:
		Bureaucrat(const std::string& IName, int IGrade);
		Bureaucrat();
		~Bureaucrat();
		Bureaucrat(const Bureaucrat &copy);
		Bureaucrat& operator=(const Bureaucrat	&obj);
		int		getGrade( void ) const;
		const std::string&	getName( void ) const;
		void	IncrementGrade( void );
		void	DecrementGrade( void );
		void	signForm(Form& form);
		// exception class
		class	GradeTooLowException : public std::exception{
			public:
				const char *what() const throw();
		};
		class	GradeTooHighException : public std::exception{
			public:
				const char *what() const throw();
		};
};
std::ostream& operator<<(std::ostream &out, const Bureaucrat& obj);
#endif 