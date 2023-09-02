#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>

class Animal{
	protected:
		std::string type;
	public:
		Animal();
		virtual ~Animal();
		Animal(const Animal& toCopy);
		Animal&	operator=(const Animal& object);
		std::string	getType( void ) const;
		virtual void	makeSound( void ) const;
};
#endif