#ifndef CAT_HPP
#define CAT_HPP
#include "Animal.hpp"

class Cat : public AAnimal{
	private:
		Brain *brain;
	public:
		Cat();
		~Cat();
		Cat(const Cat& toCopy);
		Cat& operator=(const Cat& object);
		void	makeSound( void ) const;
};
#endif