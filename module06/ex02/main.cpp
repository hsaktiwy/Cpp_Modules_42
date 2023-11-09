#include "function.hpp"

int main()
{
	{
		Base *p = generate();
		identify(p);
		Base& x = *p;
		identify(x);
	}
	std::cout << "////////////////////////////////////////////////////////////" << std::endl;
	{
		Base *p = generate();
		identify(p);
		Base& x = *p;
		identify(x);
	}
	std::cout << "////////////////////////////////////////////////////////////" << std::endl;
	{
		Base *p = generate();
		identify(p);
		Base& x = *p;
		identify(x);
	}
	std::cout << "////////////////////////////////////////////////////////////" << std::endl;
	{
		Base *p = generate();
		identify(p);
		Base& x = *p;
		identify(x);
	}
	std::cout << "////////////////////////////////////////////////////////////" << std::endl;
	{
		Base *p = new Base();
		identify(p);
		Base& x = *p;
		identify(x);
	}
	return (0);
}