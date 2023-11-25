#include "AForm.hpp"

AForm::AForm(): Name("Default"), RequireSignGrade(150), RequireExecGrade(150)
{
	Signed = false;
}

AForm::~AForm()
{

}

AForm::AForm(AForm const &copy):Name(copy.Name), RequireSignGrade(copy.RequireSignGrade), RequireExecGrade(copy.RequireExecGrade)
{
	Signed = copy.Signed;
}

AForm::AForm(const std::string& name, int SignGrade, int ExecGrade): Name(name), RequireSignGrade(SignGrade), RequireExecGrade(ExecGrade)
{
	Signed = false;
	if (RequireSignGrade < 1 || RequireExecGrade < 1)
		throw AForm::GradeTooHighException();
	if (RequireSignGrade > 150 || RequireExecGrade > 150)
		throw AForm::GradeTooLowException();
}

AForm&	AForm::operator=(const AForm& obj)
{
	if (this != &obj)
	{
		// noting to do ?
		Signed = obj.Signed;
	}
	return (*this);
}

const std::string&	AForm::getName( void ) const
{
	return (Name);
}

bool		AForm::getSigned( void ) const
{
	return (Signed);
}

int			AForm::getRequireSignGrade( void ) const
{
	return (RequireSignGrade);
}

int			AForm::getRequireExecGrade( void ) const
{
	return (RequireExecGrade);
}

void		AForm::beSigned(Bureaucrat& obj)
{
	if (RequireSignGrade >= obj.getGrade())
	{
		if (Signed == false)
		{
			Signed = true;
			std::cout << obj.getName() << " signed " << this->getName() << std::endl;
		}else
		{
			std::cout << obj.getName() << " couldn't signe " << this->getName() << "because it already signed" << std::endl;
		}
	}
	else
	{
		std::cout << obj.getName() << " couldn't signe " << this->getName() << " because it has too low grade" << std::endl;
		throw AForm::GradeTooLowException();
	}
}

const char *AForm::GradeTooHighException::what() const throw()
{
	return ("Grade is Too High");
}

const char *AForm::GradeTooLowException::what() const throw()
{
	return ("Grade is Too Low");
}

const char *AForm::NotSignedException::what() const throw()
{
	return ("Not Signed");
}
std::ostream&	operator<<(std::ostream &out, const AForm& obj)
{
	out << obj.getName() << " Form, is it signed? -> " << ((obj.getSigned() == true) ? "True" : "False") << ", grade required to sign it " << obj.getRequireSignGrade() << ", grade required to execute it " << obj.getRequireExecGrade();
	return (out);
}
