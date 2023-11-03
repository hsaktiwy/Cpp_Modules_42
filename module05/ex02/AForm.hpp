#ifndef AFORM_HPP
#define AFORM_HPP
#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"
class Bureaucrat;
class AForm{
	private:
		std::string	Name;
		bool		Signed;
		int const 	RequireSignGrade;
		int	const	RequireExecGrade;
	public:
		AForm();
		virtual ~AForm();
		AForm(AForm const &copy);
		AForm(std::string name, int SignGrade, int ExecGrade);
		AForm&	operator=(const AForm& obj);
		std::string	getName( void ) const;
		bool		getSigned( void ) const;
		int			getRequireSignGrade( void ) const;
		int			getRequireExecGrade( void ) const;
		void		beSigned(Bureaucrat& obj);
		virtual bool		execute(Bureaucrat const & executor) const = 0;
		class	GradeTooLowException : public std::exception{
			public:
				virtual const char *what() const throw();
		};
		class	GradeTooHighException : public std::exception{
			public:
				virtual const char *what() const throw();
		};
};
std::ostream& operator<<(std::ostream &out, const AForm& obj);
#endif 