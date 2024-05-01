#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Constructor Called" << std::endl;
	this->set_type("Dog");
}

Dog::~Dog()
{
	std::cout << "Destructor Called" << std::endl;
}
Dog::Dog(const Dog& obj)
{
	std::cout << "Copy constructor Called" << std::endl;
	*this = obj;
}
Dog& Dog::operator=(const Dog& obj)
{
	std::cout << "Copy Assigment operator Called" << std::endl;
	this->type = obj.type;
	return (*this);
}


void Dog::makeSound() const
{
	std::cout << "Hav Hav Hav Hav" << std::endl;
}
