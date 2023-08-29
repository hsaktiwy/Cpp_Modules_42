#include "Dog.hpp"

Dog::Dog(): Animal()
{
	type = "Dog";
	std::cout << "Obj: Dog is Created" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Obj: Dog is Destroyed" << std::endl;
}

Dog::Dog(const Dog& toCopy) : Animal(toCopy)
{

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