#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string IName, int IGrade): name(IName)
{
	grade = 150;
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

Bureaucrat::Bureaucrat(const Bureaucrat &copy)
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

std::string	Bureaucrat::getName( void ) const
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
	form.beSigned(*this);
}

void	Bureaucrat::executeForm(AForm const & form)
{
	if (form.execute(*this))
		std::cout << this->getName() << " executed " << form.getName();
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
