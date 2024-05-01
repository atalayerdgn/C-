#pragma once


#include "AMateria.hpp"

class Ice : public AMateria
{
	public:
		Ice(void);
		Ice(const Ice& copy);
		~Ice(void);
		Ice&	operator=(const Ice& other);
		void		use(ICharacter& target);
		AMateria*	clone(void) const;
};
