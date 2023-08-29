#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP
#include <iostream>

class WrongAnimal{
	protected:
		std::string type;
	public:
		WrongAnimal();
		~WrongAnimal();
		WrongAnimal(const WrongAnimal& toCopy);
		WrongAnimal&	operator=(const WrongAnimal& object);
		std::string	getType( void ) const;
		void	makeSound( void ) const;
};
#endif