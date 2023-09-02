#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	type = "WrongAnimal";
	std::cout << "Obj: WrongAnimal is Created(Default Constructor)" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Obj: WrongAnimal is Destroyed(Default Desstructor)" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& toCopy)
{
	std::cout << "Obj: WrongAnimal is Created(Copy Constructor)" << std::endl;
	type = toCopy.type; 
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& object)
{
	if(this != &object)
	{
		type = object.type;
	}
	return (*this);
}

std::string	WrongAnimal::getType( void ) const
{
	return(type);
}

void	WrongAnimal::makeSound( void ) const
{
	std::cout << "Sound: WrongNone ..." << std::endl;
}