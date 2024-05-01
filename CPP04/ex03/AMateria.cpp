#include "AMateria.hpp"
AMateria&	AMateria::operator=(AMateria const& other)
{
	if (this != &other)
		this->type = other.getType();
	return (*this);
}
AMateria::~AMateria(){}
AMateria::AMateria(){setType("Unknown");}
AMateria::AMateria(std::string const& type){setType(type);}
AMateria::AMateria(AMateria const& copy){*this = copy;}
void	AMateria::setType(std::string const& type){this->type = type;}
std::string const& AMateria::getType() const{return this->type;}
void	AMateria::use(ICharacter& target){(void)target;}
