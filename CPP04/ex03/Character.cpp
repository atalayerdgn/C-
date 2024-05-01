#include "Character.hpp"

Character::Character(void)
{
	this->setName("Unknown");
	for (int i = 0; i < 4; i++)
		this->inventory[i] = NULL;
}
Character::Character(const std::string& name){
	this->setName(name);
	for(int i = 0; i < 4; i++)
		this->inventory[i] = NULL;
}
Character::Character(const Character& copy){*this = copy;}
void	Character::setName(const std::string& name){this->name = name;}
Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		if (this->inventory[i])
			delete this->inventory[i];
	}
}
const std::string& Character::getName() const{return this->name;}
void	Character::unequip(int idx){
	if (idx < 0 || idx > 3)
		return;
	this->inventory[idx] = NULL;
}
void	Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx > 3)
		return;
	if (this->inventory[idx])
		this->inventory[idx]->use(target);
}
Character& Character::operator=(const Character& other)
{
	if (this != &other)
	{
		this->setName(other.getName());
		for (int i = 0; i < 4; i++)
		{
			if (this->inventory[i])
				delete this->inventory[i];
			this->inventory[i] = other.inventory[i]->clone();
		}
	}
	return (*this);
}
void	Character::equip(AMateria* m)
{
	if (!m)
		return ;
	for (int i = 0; i < 4; i++)
	{
		if (!this->inventory[i])
		{
			this->inventory[i] = m;
			break;
		}
	}
}
