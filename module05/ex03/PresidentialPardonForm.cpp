#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5), target("Default")
{

}

PresidentialPardonForm::PresidentialPardonForm(const std::string& Target) : AForm("PresidentialPardonForm", 25, 5), target(Target)
{

}

PresidentialPardonForm::~PresidentialPardonForm()
{

}
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& copy) : AForm(copy.getName(), copy.getRequireSignGrade(), copy.getRequireExecGrade()), target(copy.target)
{

}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& obj)
{
	if (this != &obj)
	{
		target = obj.target;
	}
	return (*this);
}

bool	PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	if (this->getSigned() && this->getRequireExecGrade() >= executor.getGrade())
	{
		std::cout << target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
		return (true);
	}else if(!this->getSigned())
		throw AForm::NotSignedException();
	else
		throw AForm::GradeTooLowException();
	return (false);
}
