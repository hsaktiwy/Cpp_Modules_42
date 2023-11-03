#ifndef FORM_HPP
#define FORM_HPP
#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"
class Bureaucrat;
class Form{
	private:
		std::string	Name;
		bool		Signed;
		int const 	RequireSignGrade;
		int	const	RequireExecGrade;
	public:
		Form();
		~Form();
		Form(Form const &copy);
		Form(std::string name, int SignGrade, int ExecGrade);
		Form&	operator=(const Form& obj);
		std::string	getName( void ) const;
		bool		getSigned( void ) const;
		int			getRequireSignGrade( void ) const;
		int			getRequireExecGrade( void ) const;
		void		beSigned(Bureaucrat& obj);
		class	GradeTooLowException : public std::exception{
			public:
				virtual const char *what() const throw();
		};
		class	GradeTooHighException : public std::exception{
			public:
				virtual const char *what() const throw();
		};
};
std::ostream& operator<<(std::ostream &out, const Form& obj);
#endif 