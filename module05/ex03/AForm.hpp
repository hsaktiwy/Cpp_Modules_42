#ifndef AFORM_HPP
#define AFORM_HPP
#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"
class Bureaucrat;
class AForm{
	private:
		const std::string	Name;
		bool				Signed;
		const int			RequireSignGrade;
		const int			RequireExecGrade;
	public:
		AForm();
		virtual ~AForm();
		AForm(AForm const &copy);
		AForm(const std::string& name, int SignGrade, int ExecGrade);
		AForm&	operator=(const AForm& obj);
		const std::string&	getName( void ) const;
		bool		getSigned( void ) const;
		int			getRequireSignGrade( void ) const;
		int			getRequireExecGrade( void ) const;
		void		beSigned(Bureaucrat& obj);
		virtual void		execute(Bureaucrat const & executor) const = 0;
		class	GradeTooLowException : public std::exception{
			public:
				const char *what() const throw();
		};
		class	GradeTooHighException : public std::exception{
			public:
				const char *what() const throw();
		};
		class	NotSignedException : public std::exception{
			public:
				const char *what() const throw();
		};
};
std::ostream& operator<<(std::ostream &out, const AForm& obj);
#endif 