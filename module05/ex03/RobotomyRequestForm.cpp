#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45), target("Default")
{

}

RobotomyRequestForm::RobotomyRequestForm(std::string Target) : AForm("RobotomyRequestForm", 72, 45), target(Target)
{

}

RobotomyRequestForm::~RobotomyRequestForm()
{

}
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& copy) : AForm(copy.getName(), copy.getRequireSignGrade(), copy.getRequireExecGrade()), target(copy.target)
{

}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& obj)
{
	if (this != &obj)
	{
		// noting to do here?
		target = obj.target;
	}
	return (*this);
}
bool	RobotomyRequestForm::robotomizing() const
{
	int beeping	= rand() % 13;
	if (beeping == 0)
		beeping = 13;
	int	success_rate = rand() % 2;

	for (int i = 0; i < beeping; i++)
		std::cout << "beep ";
	std::cout << std::endl;
	if (success_rate)
	{
		std::cout << this->target << " has been robotomized successfully" << std::endl;
		return (true);
	}
	else
		std::cout << "Fail to  robotomized the "<< this->target << std::endl;
	return (false);
}

bool	RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	if (this->getSigned() && this->getRequireExecGrade() >= executor.getGrade())
	{
		return (robotomizing());
	}
	else
		throw AForm::GradeTooLowException();
	return (false);
}