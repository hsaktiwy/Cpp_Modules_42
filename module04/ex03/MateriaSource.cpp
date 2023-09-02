#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	inventory[0] = inventory[1] = inventory[2] = inventory[3] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &toCopy)
{
	inventory[0] = inventory[1] = inventory[2] = inventory[3] = NULL;
	*this = toCopy; 
}

MateriaSource::~MateriaSource()
{
	for (int  i = 0; i < 4; i++)
		if (inventory[i])
			delete inventory[i];
}

MateriaSource& MateriaSource::operator=(const MateriaSource &obj)
{
	if (this != &obj)
	{
		for (int i = 0; i < 4; i++)
		{
			if (inventory[i])
				delete inventory[i];
			inventory[i] = obj.inventory[i]->clone();
		}
	}
	return (*this);
}

void MateriaSource::learnMateria(AMateria* s)
{
	for (int i = 0; i < 4; i++)
	{
		if (inventory[i] == NULL)
		{
			inventory[i] = s->clone();
			delete s;
			break;	
		}
	}
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		if (inventory[i] && inventory[i]->getType() == type)
			return (inventory[i]->clone());
	}
	return (NULL);
}
