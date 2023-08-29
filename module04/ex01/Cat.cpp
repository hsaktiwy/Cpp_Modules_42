#include "Cat.hpp"

Cat::Cat() : Animal()
{
	type = "Cat";
	std::cout << "Obj: Cat is Created" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Obj: Cat is Destroyed" << std::endl;
}

Cat::Cat(const Cat& toCopy) : Animal(toCopy)
{
}

Cat&	Cat::operator=(const Cat& object)
{
	if(this != &object)
	{
		type = object.type;
		brain = object.brain;
	}
	return (*this);
}

void	Cat::makeSound( void ) const
{
	std::cout << "Sound: Meow..." << std::endl;
}