#include "function.hpp"

Base	*generate(void)
{
	static int init_seeds;
	if (init_seeds == 0)
	{
		std::srand(static_cast<unsigned int>(std::time(NULL)));
		init_seeds++;
	}
	int i = std::rand() % 3 + 1;
	Base	*res = NULL;

	switch(i)
	{
		case 1:
			res = new A();
			std::cout << "Clase A generated" << std::endl;
			break;
		case 2:
			res = new B();
			std::cout << "Clase B generated" << std::endl;
			break;
		case 3:
			res = new C();
			std::cout << "Clase C generated" << std::endl;
			break;
		default : 
			break;
	}
	return (res);
}

void	identify(Base* p)
{
	std::cout << "Identification bye Pointers" << std::endl;
	A	*a = dynamic_cast<A *>(p);
	if (a)
		std::cout << "The type pointe bye is  A"<< std::endl;
	else
	{
		B	*b = dynamic_cast<B *>(p);
		if (b)
			std::cout << "The type pointe bye is  B"<< std::endl;
		else
		{
			C	*c = dynamic_cast<C *>(p);
			if (c)
				std::cout << "The type pointe bye is  C" << std::endl;
			else
				std::cout << "The type is the Base classe it self" << std::endl;
		}
	}
}

void	identify(Base& p)
{
	std::cout << "Identification bye Refrences" << std::endl;
	try
	{
		A&	a = dynamic_cast<A&>(p);
		std::cout << "The type pointe bye is  A"<< std::endl;
		(void)a;
	}
	catch(const std::bad_cast& e)
	{
		try
		{
			B&	b = dynamic_cast<B&>(p);
			std::cout << "The type pointe bye is  B"<< std::endl;
			(void)b;

		}
		catch(const std::bad_cast& e)
		{
			try
			{
				C&	c = dynamic_cast<C&>(p);
				std::cout << "The type pointe bye is  C" << std::endl;
				(void)c;
			}
			catch(const std::bad_cast& e)
			{
				std::cout << "The type is the Base classe it self" << std::endl;
			}
		}
	}
}
