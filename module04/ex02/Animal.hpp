#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>
#include "Brain.hpp"
class AAnimal{
	protected:
		std::string type;
	public:
		AAnimal();
		virtual ~AAnimal();
		AAnimal(const AAnimal& toCopy);
		AAnimal&	operator=(const AAnimal& object);
		std::string	getType( void ) const;
		virtual void	makeSound( void ) const = 0;
};
#endif