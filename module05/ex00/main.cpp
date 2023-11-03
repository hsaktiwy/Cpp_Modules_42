#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat b1, b2("E123", 32);

	std::cout << "b1 :" << b1 << std::endl;
	std::cout << "b1 :" << b2 << std::endl;

	std::cout << "///////////////////////////////////////////////////////////\n";
	b1 = b2;
	std::cout << "b1 (after b1 = b2) :" << b1 << std::endl;

	std::cout << "///////////////////////////////////////////////////////////\n";
	Bureaucrat b3(b1);
	std::cout << "b3 (after b3(b1)) :" << b3 << std::endl;
	std::cout << "///////////////////////////////////////////////////////////\n";
	try
	{
		Bureaucrat b4("O23", 0);
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	Bureaucrat b5("O25", 1), b6("O26", 150);
	std::cout << "b5 :" << b5 << std::endl;
	std::cout << "b6 :" << b6 << std::endl;
	std::cout << "Execption m ust be trown 2 time one for b5 other for b6\n";

	try
	{
		b5.IncrementGrade();
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		b6.DecrementGrade();
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	
	std::cout << "///////////////////////////////////////////////////////////\n";
	for(int i = 0; i < 32; i++)
	{
		try
		{
			b2.IncrementGrade();
		}
		catch(std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
		std::cout << b2 << std::endl;
	}
}