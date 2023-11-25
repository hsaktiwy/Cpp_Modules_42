#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
	{
		Bureaucrat a = Bureaucrat();
		PresidentialPardonForm b = PresidentialPardonForm("default");
		std::cout << a << std::endl;
		std::cout << b << std::endl;
		try
		{
			b.beSigned(a);
		}
		catch(std::exception &e)
		{
			std::cout << "Exception handler : " << e.what() << std::endl;
		}

		std::cout << b << std::endl;
	}
	std::cout << "////////////////////////////////////////////////////////////" << std::endl;
	{
		Bureaucrat a = Bureaucrat("Assistant", 145);
		Bureaucrat b = Bureaucrat("CEO", 1);
		PresidentialPardonForm c = PresidentialPardonForm("Hamza");
		std::cout << a << std::endl;
		std::cout << b << std::endl;
		std::cout << c << std::endl;
		try
		{
			c.beSigned(a);
		}
		catch(std::exception &e)
		{
			std::cerr << "Exception handler : " << e.what() << std::endl;
		}
		try
		{
			c.execute(b);
		}
		catch (std::exception &e)
		{
			std::cerr << "Exception handler : " << e.what() << std::endl;
		}
		b.signForm(c);
		try
		{
			c.execute(a);
		}
		catch(std::exception &e)
		{
			std::cerr << "Exception handler : " << e.what() << "\033[0m" << std::endl;
		}
	}
	std::cout << "////////////////////////////////////////////////////////////" << std::endl;
	{
		Bureaucrat a = Bureaucrat("Emperor", 1);
		RobotomyRequestForm b = RobotomyRequestForm("Bender");
		ShrubberyCreationForm c = ShrubberyCreationForm("christmas");
		b.beSigned(a);
		a.signForm(c);
		for (int i= 0; i < 10; i++)
			b.execute(a);
		c.execute(a);
	}
	return (0);
}