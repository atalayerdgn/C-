#pragma once

#include <iostream>

class ClapTrap
{
	protected:
		std::string name;
		int	energy;
		int	attackdmg;
		int	hitpoints;
	public:
	ClapTrap();
	~ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap& obj);
	ClapTrap& operator=(const ClapTrap& add);
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};
