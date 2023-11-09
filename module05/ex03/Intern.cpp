#include "Intern.hpp"

Intern::Intern()
{

}

Intern::~Intern()
{

}

Intern::Intern(const Intern& copy)
{
    *this = copy;
}

Intern& Intern::operator=(const Intern& obj)
{
    if (this != &obj)
    {
		// noting to do
    }
    return (*this);
}

static std::string string_tolower(std::string str)
{
	for (size_t i = 0; i < str.length(); i++)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
	}
	return (str);
}

AForm *Intern::makeForm(std::string name, std::string target)
{
	AForm *form = NULL;
	std::string Forms[3] = {"presidential pardon", "robotomy request", "shrubbery creation"};
	int idx = -1;
	name  = string_tolower(name);
	std::cout << name << std::endl;
	for (int i = 0; i < 3; i++)
	{
		if (name == Forms[i])
		{
			idx = i;
			break;
		}
	}
	switch (idx)
	{
		case 0:
			form = new PresidentialPardonForm(target);
			break;
		case 1:
			form = new RobotomyRequestForm(target);
			break;
		case 2:
			form = new ShrubberyCreationForm(target);
			break;
		default:
			std:: cout << "Undefine Form type!!!" << std::endl;
			break;
	}
	if (idx != -1)
		std::cout << "Intern creates " << Forms[idx] << std::endl;
	return (form);
}