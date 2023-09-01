#ifndef AMATERIA_HPP
#define AMATERIA_HPP
#include <iostream>
#include "ICharacter.hpp"

class ICharacter;

class AMateria{
	protected:
		std::string	Type;
	public:
		AMateria();
		AMateria(const AMateria& toCopy);
		AMateria(std::string const & type);
		AMateria& operator=(const AMateria& toCopy);
		virtual ~AMateria();
		std::string const & getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

#endif