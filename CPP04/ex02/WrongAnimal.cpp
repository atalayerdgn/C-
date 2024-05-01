#include "WrongAnimal.hpp"


WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal Constructor Called" << std::endl;
	this->set_type("WrongAnimal");
}
WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal Destructor Called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& obj)
{
	std::cout << "WrongAnimal Copy constructor Called" << std::endl;
	*this = obj;
}
void WrongAnimal::set_type(std::string type)
{
	this->type = type;
}
std::string WrongAnimal::getType() const
{
	return (this->type);
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& obj)
{
	std::cout << "WrongAnimal Operator assigment operator Called" << std::endl;
	this->type = obj.type;
	return (*this);
}

void WrongAnimal::makeSound() const
{
	std::cout << "AAAAAAAAAAAA" << std::endl;
}
