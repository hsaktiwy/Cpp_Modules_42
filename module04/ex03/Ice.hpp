#ifndef ICE_HPP
#define ICE_HPP
#include "AMateria.hpp"
	class Ice : public AMateria
	{
		public:
			Ice();
			Ice(const Ice& toCopy);
			~Ice();
			Ice& operator=(const Ice& obj);
			Ice* clone() const;
			void use(ICharacter& target);
	};
#endif