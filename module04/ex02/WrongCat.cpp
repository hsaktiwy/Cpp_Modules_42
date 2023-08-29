#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
	type = "WrongCat";
	std::cout << "Obj: WrongCat is Created" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "Obj: WrongCat is Destroyed" << std::endl;
}

WrongCat::WrongCat(const WrongCat& toCopy) : WrongAnimal(toCopy)
{
}

WrongCat&	WrongCat::operator=(const WrongCat& object)
{
	if(this != &object)
	{
		type = object.type;
	}
	return (*this);
}

void	WrongCat::makeSound( void ) const
{
	std::cout << "Sound: WrongMeow..." << std::endl;
}