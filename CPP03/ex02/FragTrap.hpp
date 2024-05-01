#pragma once

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
	FragTrap();
	FragTrap(std::string name);
	FragTrap(const ClapTrap& obj);
	FragTrap& operator=(const FragTrap& add);
	~FragTrap();
	void highFivesGuys(void);
};
