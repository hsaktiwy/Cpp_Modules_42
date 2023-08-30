#include "Cure.hpp"

Cure::Cure() : AMateria();
{
	std::cout << "Cure Default Constructor\n";
	type = "cure";
}

Cure::Cure(const Cure& toCopy)
{
	std::cout << "Cure Copy Constructor\n";
	*this = toCopy;
}

Cure::~Cure()
{
	std::cout << "Cure Default Detructor\n";
}

Cure& Cure::operator=(const Cure& obj)
{
	if (this != &obj)
	{
		// ??
	}
	return (*this);
}

Cure* Cure::clone() const
{
	Cure *cure = new Cure();
	cure = *this;
	return (cure);
}

void Cure::use(ICharacter& target)
{
	// ?? 
}
