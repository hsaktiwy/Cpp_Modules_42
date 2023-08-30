#ifndef AMATERIA_HPP
#define AMATERIA_HPP
#include <iostream>
#include "Character.hpp"
class AMateria{
	protected:
		std::string	Type;
	public:
		AMateria(std::string const & type);
		AMateria(const AMateria& toCopy);
		AMateria& operator=(const AMateria& toCopy);
		virtual ~AMateria();
		std::string const & getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};
#endif