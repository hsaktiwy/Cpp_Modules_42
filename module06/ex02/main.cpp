#include "function.hpp"

int main()
{
	{
		Base *p = generate();
		identify(p);
		Base& x = *p;
		identify(x);
		delete p;
	}
	std::cout << "////////////////////////////////////////////////////////////" << std::endl;
	{
		Base *p = generate();
		identify(p);
		Base& x = *p;
		identify(x);
		delete p;
	}
	std::cout << "////////////////////////////////////////////////////////////" << std::endl;
	{
		Base *p = generate();
		identify(p);
		Base& x = *p;
		identify(x);
		delete p;
	}
	std::cout << "////////////////////////////////////////////////////////////" << std::endl;
	{
		Base *p = generate();
		identify(p);
		Base& x = *p;
		identify(x);
		delete p;
	}
	return (0);
}
