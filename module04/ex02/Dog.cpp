#include "Dog.hpp"

Dog::Dog(): AAnimal()
{
	type = "Dog";
	brain = new Brain();
	std::cout << "Obj: Dog is Created" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Obj: Dog is Destroyed" << std::endl;
	delete brain;
}

Dog::Dog(const Dog& toCopy) : AAnimal(toCopy)
{
	std::cout << "Obj: Dog is Craeted (Copy Constructed)" << std::endl;
	brain = new Brain();
	*this = toCopy; 
}

Dog&	Dog::operator=(const Dog& object)
{
	std::cout << "Obj: Dog is Assigne Operator" << std::endl;
	if(this != &object)
	{
		type = object.type;
		*brain = *object.brain;
	}
	return (*this);
}

void	Dog::makeSound( void ) const
{
	std::cout << "Sound: Woof..." << std::endl;
}