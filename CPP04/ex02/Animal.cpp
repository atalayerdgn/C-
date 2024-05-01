#include "Animal.hpp"


Animal::Animal()
{
	std::cout << "Animal Constructor Called" << std::endl;
}
Animal::~Animal()
{
	std::cout << "Animal Destructor Called" << std::endl;
}

Animal::Animal(const Animal& obj)
{
	std::cout << "Animal Copy constructor Called" << std::endl;
	*this = obj;
}
void Animal::set_type(std::string type)
{
	this->type = type;
}
std::string Animal::getType() const
{
	return (this->type);
}

Animal& Animal::operator=(const Animal& obj)
{
	std::cout << "Animal Operator assigment operator Called" << std::endl;
	this->type = obj.type;
	return (*this);
}
