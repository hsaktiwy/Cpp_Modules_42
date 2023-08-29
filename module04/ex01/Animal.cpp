#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Obj: Animal is Created" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Obj: Animal is Destroyed" << std::endl;
}

Animal::Animal(const Animal& toCopy)
{
	type = toCopy.type;
}

Animal& Animal::operator=(const Animal& object)
{
	std::cout << "Animal Copy assigne operator" << std::endl;
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