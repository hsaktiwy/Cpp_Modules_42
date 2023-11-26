#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string& IName, int IGrade): name(IName)
{
	if (IGrade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (IGrade > 150)
		throw Bureaucrat::GradeTooLowException();
	grade = IGrade;
}

Bureaucrat::Bureaucrat() : name("Default"), grade(150)
{

}

Bureaucrat::~Bureaucrat()
{

}

Bureaucrat::Bureaucrat(const Bureaucrat &copy): name(copy.name)
{
	*this = copy;
}

// should i bureaucrat keep it change it name in asigne operation ? (our name is const so logicly leave it like this)
Bureaucrat& Bureaucrat::operator=(const Bureaucrat	&obj)
{
	if (this != &obj)
	{
		this->grade = obj.grade;
	}
	return (*this);
}

int	Bureaucrat::getGrade( void ) const
{
	return (grade);
}

const std::string&	Bureaucrat::getName( void ) const
{
	return (name);
}

void	Bureaucrat::IncrementGrade( void )
{
	if (grade - 1 < 1)
		throw Bureaucrat::GradeTooHighException();
	grade--;
}

void	Bureaucrat::DecrementGrade( void )
{
	if (grade + 1 > 150)
		throw Bureaucrat::GradeTooLowException();
	grade++;
}

void	Bureaucrat::signForm(AForm& form)
{
	try
	{
		if (form.getSigned())
		{
			std::cout << name << " couldn't signe" << form.getName() << " because it already signed" << std::endl;
			return ;
		}
		form.beSigned(*this);
		std::cout << name << " signed " << form.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << name << " couldn't signe" << form.getName() << " because " << e.what() << std::endl;
	}	
}

void	Bureaucrat::executeForm(AForm const & form)
{
	try
	{
		form.execute(*this);
		std::cout << this->getName() << " executed " << form.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << name << " couldn't execute " << form.getName() << " because " << e.what() << std::endl;
	}
}

std::ostream& operator<<(std::ostream &out, const Bureaucrat& obj)
{
	out << obj.getName() << " bureaucrat grade " << obj.getGrade();
	return (out);
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade is Too High");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade is Too Low");
}
