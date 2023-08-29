#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

void leak_f()
{
	system("leaks animals");
}
int main()
{
	// atexit(leak_f);
	// int n = 10;
	Cat *cat = new Cat();
	Dog *dog = new Dog();
	Dog dog2(*dog);
	(void)dog2;
	(void) cat;

	delete cat;
	delete dog;
}
