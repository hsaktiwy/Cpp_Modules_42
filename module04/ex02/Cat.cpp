#include "Cat.hpp"

Cat::Cat() : AAnimal()
{
	type = "Cat";
	brain = new Brain();
	std::cout << "Obj: Cat is Created" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Obj: Cat is Destroyed" << std::endl;
	delete brain;
}

Cat::Cat(const Cat& toCopy) : AAnimal(toCopy)
{
	std::cout << "Obj: Cat is Created(Copy Constructor)" << std::endl;
	brain = new Brain();
	*this = toCopy; 
}

Cat&	Cat::operator=(const Cat& object)
{
	std::cout << "Obj: Cat is Assigne Operator" << std::endl;
	if(this != &object)
	{
		type = object.type;
		*brain = *object.brain;
	}
	return (*this);
}

void	Cat::makeSound( void ) const
{
	std::cout << "Sound: Meow..." << std::endl;
}