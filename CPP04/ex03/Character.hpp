#pragma once

#include "AMateria.hpp"

class Character : public ICharacter
{
	std::string	name;
	AMateria* inventory[4];
	public:
	Character();
	Character(const std::string& name);
	Character(const Character& copy);
	~Character();
	Character&	operator=(const Character& other);
	void	setName(const std::string& name);
	const std::string& getName() const;
	void	equip(AMateria* m);
	void	unequip(int idx);
	void	use(int idx, ICharacter& target);
};
