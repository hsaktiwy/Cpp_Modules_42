#include "Ice.hpp"

Ice::Ice()
{

}

Ice::Ice(const Ice& toCopy)
{

}

Ice::~Ice()
{

}

Ice& Ice::operator=(const Ice& obj)
{

}

AMateria* Ice::clone() const
{
	Cure *cure = new Cure();
	cure = *this;
	return (cure);
}

void Ice::use(ICharacter& target)
{

}