#ifndef CHARACTER_HPP
#define CHARACTER_HPP
#include "ICharacter.hpp"

class Character : public ICharacter
{
	private:
		AMateria*	inventory[4];
		std::string	name;
	public:
		Character();
		Character(std::string t_n);
		~Character();
		Character(const Character& tc);
		Character& operator=(const Character& obj);
		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
};

#endif