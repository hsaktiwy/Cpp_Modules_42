#include "Dog.hpp"

Dog::Dog(): Animal()
{
	std::cout << "Obj: Dog is Created(Default Constructor)" << std::endl;
	type = "Dog";
}

Dog::~Dog()
{
	std::cout << "Obj: Dog is Destroyed(Default Destructor)" << std::endl;
}

Dog::Dog(const Dog& toCopy) : Animal(toCopy)
{
	std::cout << "Obj: Dog is Created(Copy Constructor)" << std::endl;
	*this = toCopy;
}

Dog&	Dog::operator=(const Dog& object)
{
	if(this != &object)
	{
		type = object.type;
	}
	return (*this);
}

void	Dog::makeSound( void ) const
{
	std::cout << "Sound: Woof..." << std::endl;
}