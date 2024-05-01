#pragma once


#include "ClapTrap.hpp"


class ScavTrap : public ClapTrap
{
	public:
	ScavTrap();
	ScavTrap(std::string name);
	~ScavTrap();
	ScavTrap(const ScavTrap& obj);
	ScavTrap& operator=(const ScavTrap& add);
	void	attack(const std::string &target);
	void	guardGate();
};
