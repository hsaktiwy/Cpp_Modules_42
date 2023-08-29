#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>
#include "Brain.hpp"
class Animal{
	protected:
		std::string type;
	public:
		Animal();
		~Animal();
		Animal(const Animal& toCopy);
		Animal&	operator=(const Animal& object);
		std::string	getType( void ) const;
		void	makeSound( void ) const;
};
#endif