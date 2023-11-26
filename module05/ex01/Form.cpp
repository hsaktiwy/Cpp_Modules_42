/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsaktiwy <hsaktiwy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 16:10:45 by hsaktiwy          #+#    #+#             */
/*   Updated: 2023/11/26 11:15:05 by hsaktiwy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(): Name("Default"), RequireSignGrade(150), RequireExecGrade(150)
{
	Signed = false;
}

Form::~Form()
{

}

Form::Form(Form const &copy):Name(copy.Name), RequireSignGrade(copy.RequireSignGrade), RequireExecGrade(copy.RequireExecGrade)
{
	Signed = copy.Signed;
}

Form::Form(const std::string& name, int SignGrade, int ExecGrade): Name(name), RequireSignGrade(SignGrade), RequireExecGrade(ExecGrade)
{
	Signed = false;
	if (RequireSignGrade < 1 || RequireExecGrade < 1)
		throw Form::GradeTooHighException();
	if (RequireSignGrade > 150 || RequireExecGrade > 150)
		throw Form::GradeTooLowException();
}

Form&	Form::operator=(const Form& obj)
{
	if (this != &obj)
	{
		// noting to do ?
		Signed = obj.Signed;
	}
	return (*this);
}

const std::string&	Form::getName( void ) const
{
	return (Name);
}

bool		Form::getSigned( void ) const
{
	return (Signed);
}

int			Form::getRequireSignGrade( void ) const
{
	return (RequireSignGrade);
}

int			Form::getRequireExecGrade( void ) const
{
	return (RequireExecGrade);
}

void		Form::beSigned(Bureaucrat& obj)
{
	if (RequireSignGrade >= obj.getGrade())
		Signed = true;
	else
		throw Form::GradeTooLowException();
}

const char *Form::GradeTooHighException::what() const throw()
{
	return ("Grade is Too High");
}

const char *Form::GradeTooLowException::what() const throw()
{
	return ("Grade is Too Low");
}

std::ostream&	operator<<(std::ostream &out, const Form& obj)
{
	out << obj.getName() << " Form, is it signed? -> " << ((obj.getSigned() == true) ? "True" : "False") << ", grade required to sign it " << obj.getRequireSignGrade() << ", grade required to execute it " << obj.getRequireExecGrade() << ".";
	return (out);
}
