#pragma once

#include <iostream>
#include "ICharacter.hpp"

class ICharacter;

class AMateria
{
	protected:
	std::string type;
	public:
	AMateria();
	AMateria(std::string const & type);
	AMateria(AMateria const &copy);
	virtual ~AMateria(void);
	AMateria& operator=(AMateria const& other);
	void setType(std::string const& type);
	std::string const & getType() const;
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};
