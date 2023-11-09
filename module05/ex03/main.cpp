#include "Intern.hpp"

void 	leaks()
{
	system("leaks Buraucrat");
}
int main()
{
	// atexit(leaks);
	Bureaucrat hamza("Hamza", 5);
	{
		Intern someRandomIntern;
		AForm* rrf;
		rrf = someRandomIntern.makeForm("Robotomy request", "Bender");
		if (rrf)
		{
			hamza.signForm(*rrf);
			hamza.executeForm(*rrf);
		}
		if (rrf)
			delete rrf;
	}
	std::cout << "////////////////////////////////////////////////////////////" << std::endl;
	{
		Intern someRandomIntern;
		AForm* rrf;
		rrf = someRandomIntern.makeForm("RobotomS request", "Bender");
		if (rrf)
		{
			hamza.signForm(*rrf);
			hamza.executeForm(*rrf);
		}
		if (rrf)
			delete rrf;
	}
	std::cout << "////////////////////////////////////////////////////////////" << std::endl;
	{
		Intern someRandomIntern;
		AForm* rrf;
		rrf = someRandomIntern.makeForm("Shrubbery Creation", "Trees");
		if (rrf)
		{
			hamza.signForm(*rrf);
			hamza.executeForm(*rrf);
		}
		if (rrf)
			delete rrf;
	}
	std::cout << "////////////////////////////////////////////////////////////" << std::endl;
	{
		Intern someRandomIntern;
		AForm* rrf;
		rrf = someRandomIntern.makeForm("Presidential Pardon", "Trees");
		if (rrf)
		{
			hamza.signForm(*rrf);
			hamza.executeForm(*rrf);
		}
		if (rrf)
			delete rrf;
	}
}
