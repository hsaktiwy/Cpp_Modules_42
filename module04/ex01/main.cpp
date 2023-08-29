#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	int n = 10;
	Animal *array = new Animal[n];
	Cat *cat = new Cat();
	Dog *dog = new Dog();
	(void) cat;
	// Dogs 
	for(int i = 0; i < n / 2; i++)
		array[i] = *dog;
	for(int i = n/2; i < n; i++)
		array[i] = *cat;
	delete[] array;
	delete cat;
	delete dog;
}
