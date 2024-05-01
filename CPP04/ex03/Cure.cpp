#include "Cure.hpp"

Cure::Cure(){setType("cure");}
Cure::Cure(const Cure& copy){*this = copy;}
Cure::~Cure(){}
Cure& Cure::operator=(const Cure& other){
	if (this != &other)
		this->type = other.getType();
	return (*this);}
void Cure::use(ICharacter& target){std::cout << "* heals " << target.getName() << "\'s wounds *" << std::endl;}
AMateria* Cure::clone() const {return (new Cure(*this));}
