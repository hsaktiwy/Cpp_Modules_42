#include "Cat.hpp"

Cat::Cat() : Animal()
{
	type = "Cat";
	std::cout << "Obj: Cat is Created(Default Constructor)" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Obj: Cat is Destroyed(Default Destructor)" << std::endl;
}

Cat::Cat(const Cat& toCopy) : Animal(toCopy)
{
	std::cout << "Obj: Cat is Created(Copy Constructor)" << std::endl;
	*this = toCopy; 
}

Cat&	Cat::operator=(const Cat& object)
{
	if(this != &object)
	{
		type = object.type;
	}
	return (*this);
}

void	Cat::makeSound( void ) const
{
	std::cout << "Sound: Meow..." << std::endl;
}