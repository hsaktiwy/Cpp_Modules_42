#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Obj: Animal is Created(Default constructor)" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Obj: Animal is Destroyed(Default Destructor)" << std::endl;
}

Animal::Animal(const Animal& toCopy)
{
	std::cout << "Obj: Animal is Created(Copy constructor)" << std::endl;
	type = toCopy.type; 
}

Animal& Animal::operator=(const Animal& object)
{
	if(this != &object)
	{
		type = object.type;
	}
	return (*this);
}

std::string	Animal::getType( void ) const
{
	return(type);
}

void	Animal::makeSound( void ) const
{
	std::cout << "Sound: None ..." << std::endl;
}