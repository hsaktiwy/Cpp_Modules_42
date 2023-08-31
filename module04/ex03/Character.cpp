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
}

Character::Character(const Character& tc)
{
	std::cout << "Character Copy Constructor\n";
	inventory[0] = inventory[1] = inventory[2] = inventory[3] = NULL;
}

Character& Character::operator=(const Character& obj)
{
	std::cout << "Character Assigne Operaor\n";

}

std::string const & Character::getName() const
{

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
	if (idx >= 0 && idx < 4)
	{
		inventory[idx]->use(target);
	}
	else
		std::cout << "Invalide index!!!\n";
}
