#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "Constructor Called" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "Constructor With parameter Called" << std::endl;
	this->name = name;
	this->hitpoints = 10;
	this->energy = 10;
	this->attackdmg = 0;
}
ClapTrap::~ClapTrap()
{
	std::cout << "Desructor Called" << std::endl;
}
ClapTrap& ClapTrap::operator=(const ClapTrap& add)
{
	std::cout << "Operator overloading Called" << std::endl;
	this->attackdmg = add.attackdmg;
	this->name = add.name;
	this->energy = add.energy;
	this->hitpoints = add.hitpoints;
	return (*this);
}

ClapTrap::ClapTrap(const ClapTrap& obj)
{
	std::cout << "Copy Constructor Called" << std::endl;
	*this = obj;
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->energy > 0 && this->hitpoints > 0)
	{
		std::cout << "ClapTrap " << this->name << " attacks it causes its " << target <<  " to lose " << this->attackdmg << " hitpoints " << std::endl;
		this->energy--;
	}
	else
		std::cout << "ClapTrap Cant do anything or died" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->energy > 0 && this->hitpoints > 0)
	{
		std::cout << "took damage" << std::endl;
		hitpoints-=amount;
	}
	else
		std::cout << "ClapTrap Cant do anything or died" << std::endl;
	if (this->hitpoints < 0)
		this->hitpoints = 0;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->energy > 0 && this->hitpoints > 0)
	{
		std::cout << "Claptrap repairs itselfs, it gets " << amount <<  " hit points back " << std::endl;
		this->hitpoints+=amount;
		this->energy--;
	}
	else
		std::cout << "ClapTrap Cant do anything or died" << std::endl;
}
