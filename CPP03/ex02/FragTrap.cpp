#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "Constructor Called" << std::endl;
}

FragTrap::FragTrap(std::string name)
{
	std::cout << "Constructor With param called" << std::endl;
	this->name = name;
	this->hitpoints = 100;
	this->energy = 100;
	this->attackdmg = 30;
}

FragTrap::~FragTrap()
{
	std::cout << "Destructor Called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& add)
{
	this->hitpoints = add.hitpoints;
	this->name = add.name;
	this->energy = add.energy;
	this->attackdmg = add.attackdmg;
	return (*this);
}
FragTrap::FragTrap(const ClapTrap& obj)
{
	*this = obj;
}
void FragTrap::highFivesGuys(void)
{
	if (hitpoints > 0 && energy > 0)
		std::cout << "High Five" << std::endl;
	else
		std::cout << "Can't able or died" << std::endl;
}
