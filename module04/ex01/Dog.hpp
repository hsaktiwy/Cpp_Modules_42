#ifndef DOG_HPP
#define DOG_HPP
#include "Animal.hpp"

class Dog : public Animal{
	private:
		Brain *brain;
	public:
		Dog();
		~Dog();
		Dog(const Dog& toCopy);
		Dog& operator=(const Dog& object);
		void	makeSound( void ) const;
};
#endif