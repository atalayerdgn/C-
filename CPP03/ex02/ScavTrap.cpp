#include "ScavTrap.hpp"


ScavTrap::ScavTrap()
{
	std::cout << "Constructor Called" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
	std::cout << "Constructor with param Called" << std::endl;
	this->name = name;
	this->hitpoints = 100;
	this->energy = 50;
	this->attackdmg = 20;
}

ScavTrap::~ScavTrap()
{
	std::cout << "Destructor Called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& obj)
{
	*this = obj;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& add)
{
	this->name = add.name;
	this->hitpoints = add.hitpoints;
	this->energy = add.energy;
	this->attackdmg = add.attackdmg;
	return (*this);
}

void ScavTrap::attack(const std::string &target)
{
	if (this->energy > 0 && this->hitpoints > 0)
	{
		std::cout << "ScavTrap " << this->name << " attacks it causes its " << target <<  " to lose " << this->attackdmg << " hitpoints " << std::endl;
		this->energy--;
	}
	else
		std::cout << "ScavTrap Cant do anything or died" << std::endl;
}

void ScavTrap::guardGate()
{
	if (this->energy > 0 && this->hitpoints > 0)
		std::cout << "ScavTrap is now in Gate keeper mode." << std::endl;
	else
		std::cout << "ScavTrap Cant do anything or died" << std::endl;
}
