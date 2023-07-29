#include "test.hpp"
#include <iostream>
class B{
	public:
		~B()
		{
			std::cout << "destroyed\n";
		}
		void stream()
		{
			std::cout << "strem";			
		}
};

int main()
{
	B b;
	void *ptr;
	void (B::*ptr1)(void);
	ptr = &b;
	ptr1 = &B::stream;
	std::cout << ptr << " " << ptr1 << std::endl;
	return (0);
}