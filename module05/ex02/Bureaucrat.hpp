#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <iostream>
#include <ostream>
#include <exception>
#include "AForm.hpp"
class AForm;
class Bureaucrat{
	private:
		std::string const name;
		int grade;
	public:
		Bureaucrat(std::string IName, int IGrade);
		Bureaucrat();
		~Bureaucrat();
		Bureaucrat(const Bureaucrat &copy);
		Bureaucrat& operator=(const Bureaucrat	&obj);
		int		getGrade( void ) const;
		std::string 	getName( void ) const;
		void	IncrementGrade( void );
		void	DecrementGrade( void );
		void	signForm(AForm& form);
		void	executeForm(AForm const & form);
		// exception class
		class	GradeTooLowException : public std::exception{
			public:
				virtual const char *what() const throw();
		};
		class	GradeTooHighException : public std::exception{
			public:
				virtual const char *what() const throw();
		};
};
std::ostream& operator<<(std::ostream &out, const Bureaucrat& obj);
#endif 