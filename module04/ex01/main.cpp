#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

void func_l()
{
	system("leaks animals");
}
int main()
{
	atexit(func_l);
	int n = 10;
	Animal *array[n];
	Cat *cat = new Cat();
	Dog *dog = new Dog();
	Dog dog2(*dog);
	(void)dog2;
	(void) cat;
	// Dogs 
	for(int i = 0; i < n / 2; i++)
		array[i] = new Dog();
	// Cats
	for(int i = n/2; i < n; i++)
		array[i] = new Cat();
	for (int i = 0; i < n; i++)
		delete array[i];
	delete cat;
	delete dog;
}
