#include "Animal.hpp"

AAnimal::AAnimal()
{
	std::cout << "Obj: AAnimal is Created" << std::endl;
}

AAnimal::~AAnimal()
{
	std::cout << "Obj: AAnimal is Destroyed" << std::endl;
}

AAnimal::AAnimal(const AAnimal& toCopy)
{
	type = toCopy.type;
}

AAnimal& AAnimal::operator=(const AAnimal& object)
{
	std::cout << "AAnimal Copy assigne operator" << std::endl;
	if(this != &object)
	{
		type = object.type;
	}
	return (*this);
}

std::string	AAnimal::getType( void ) const
{
	return(type);
}
