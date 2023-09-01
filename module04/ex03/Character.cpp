#include "Character.hpp"

Character::Character()
{
	std::cout << "Character Default Constructor\n";
	inventory[0] = inventory[1] = inventory[2] = inventory[3] = NULL;
}

Character::Character(std::string t_n)
{
	std::cout << "Character Naming Constructor\n";
	name = t_n;
	inventory[0] = inventory[1] = inventory[2] = inventory[3] = NULL;
}

Character::~Character()
{
	std::cout << "Character Default Destructor\n";
	for (int i = 0; i < 4; i++)
	{
		if (inventory[i])
				delete inventory[i];
	}
}

Character::Character(const Character& tc)
{
	std::cout << "Character Copy Constructor\n";
	*this = tc;
}

Character& Character::operator=(const Character& obj)
{
	std::cout << "Character Assigne Operaor\n";
	if (this != &obj)
	{
		for (int i = 0; i < 4; i++)
		{
			if (inventory[i])
				delete inventory[i];
			inventory[i] = obj.inventory[i];
		}
		this->name = obj.getName();
	}
	return (*this);
}

std::string const & Character::getName() const
{
	return (name);
}

void Character::equip(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (inventory[i] == NULL)
		{
			inventory[i] = m;
			return ;
		}
	}
}

void Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4)
		inventory[idx] = NULL;
	else
		std::cout << "Invalide index!!!\n";
}

void Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx < 4 && inventory[idx])
	{
		inventory[idx]->use(target);
	}
	else
		std::cout << "Invalide index!!!\n";
}
