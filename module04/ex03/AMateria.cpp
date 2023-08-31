#include "AMateria.hpp"

AMateria::AMateria()
{
	
}

AMateria::AMateria(std::string const & type)
{
	std::cout << "AMateria Naming Constructor\n";
	Type = type;
}

AMateria::AMateria(const AMateria& toCopy)
{
	std::cout << "AMateria Naming Constructor\n";
	*this = toCopy;
}

AMateria& AMateria::operator=(const AMateria& obj)
{
	std::cout << "AMateria Assigne Operator\n";
	if (this != &obj)
	{
		Type = obj.Type;
	}
	return (*this);
}

AMateria::~AMateria()
{
	std::cout << "AMateria Default Destructor\n";
}

std::string const & AMateria::getType() const
{
	return (Type);
}

void AMateria::use(ICharacter& target)
{
	// must be overrided
}
