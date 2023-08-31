#ifndef MATERIASOURCE_HPP
#define	MATERIASOURCE_HPP
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource{
	private:
		AMateria *inventory[4];
	public:
		MateriaSource();
		MateriaSource(const MateriaSource &toCopy);
		~MateriaSource();
		MateriaSource &operator=(const MateriaSource &obj);
		void learnMateria(AMateria* s);
		AMateria* createMateria(std::string const & type);
};
#endif