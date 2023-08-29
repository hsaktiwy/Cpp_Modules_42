#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal{
	public:
		WrongCat();
		~WrongCat();
		WrongCat(const WrongCat& toCopy);
		WrongCat& operator=(const WrongCat& object);
		void	makeSound( void ) const;
};
#endif