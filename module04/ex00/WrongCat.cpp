#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
	std::cout << "Obj: WrongCat is Created(Default Constructor)" << std::endl;
	type = "WrongCat";
}

WrongCat::~WrongCat()
{
	std::cout << "Obj: WrongCat is Destroyed(Default Destructor)" << std::endl;
}

WrongCat::WrongCat(const WrongCat& toCopy) : WrongAnimal(toCopy)
{
	std::cout << "Obj: WrongCat is Created(Copy Constructor)" << std::endl;
	*this = toCopy;
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