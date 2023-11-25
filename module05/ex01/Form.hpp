/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsaktiwy <hsaktiwy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 16:10:49 by hsaktiwy          #+#    #+#             */
/*   Updated: 2023/11/25 16:58:47 by hsaktiwy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP
#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"
class Bureaucrat;
class Form{
	private:
		const std::string	Name;
		bool			Signed;
		const int		RequireSignGrade;
		const int		RequireExecGrade;
	public:
		Form();
		~Form();
		Form(Form const &copy);
		Form(const std::string& name, int SignGrade, int ExecGrade);
		Form&	operator=(const Form& obj);
		const std::string&	getName( void ) const;
		bool		getSigned( void ) const;
		int			getRequireSignGrade( void ) const;
		int			getRequireExecGrade( void ) const;
		void		beSigned(Bureaucrat& obj);
		class	GradeTooLowException : public std::exception{
			public:
				const char *what() const throw();
		};
		class	GradeTooHighException : public std::exception{
			public:
				const char *what() const throw();
		};
};
std::ostream& operator<<(std::ostream &out, const Form& obj);
#endif 