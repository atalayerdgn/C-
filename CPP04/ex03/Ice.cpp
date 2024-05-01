#include "Ice.hpp"

Ice::Ice(void){setType("ice");}
Ice::Ice(const Ice& copy){*this = copy;}
Ice::~Ice(void){}
Ice&	Ice::operator=(const Ice& other){
	if (this != &other)
		this->type = other.getType();
	return (*this);
}
void	Ice::use(ICharacter& target){std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;}
AMateria*	Ice::clone(void) const {return (new Ice(*this));}
