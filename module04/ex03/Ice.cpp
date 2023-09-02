#include "Ice.hpp"

Ice::Ice()
{
	std::cout << "Ice Default Constructor\n";
	Type = "ice";
}

Ice::Ice(const Ice& toCopy): AMateria(toCopy.Type)
{
	std::cout << "Ice Default Constructor\n";
	*this = toCopy;
}

Ice::~Ice()
{
	std::cout <<  "Ice Default Constructor\n";
}

Ice& Ice::operator=(const Ice& obj)
{
	if ( this != &obj)
	{
		// ??
	}
	return (*this);
}

Ice* Ice::clone() const
{
	Ice *ice = new Ice();
	*ice = *this;
	return (ice);
}

void Ice::use(ICharacter& target)
{
	std::cout <<  "* shoots an ice bolt at " << target.getName() <<  " *" << std::endl;
}