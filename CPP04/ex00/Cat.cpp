#include "Cat.hpp"


Cat::Cat()
{
	std::cout << "Cat Constructor Called" << std::endl;
	this->set_type("Cat");
}
Cat::~Cat()
{
	std::cout << "Cat Destructor Called" << std::endl;
}

Cat::Cat(const Cat& obj)
{
	std::cout << "Cat copy Constructor Called" << std::endl;
	*this = obj;
}

Cat& Cat::operator=(const Cat& obj)
{
	std::cout << "Cat operator Assigment Operator Called" << std::endl;
	this->type = obj.type;
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << "Meooooooowwwwwww" << std::endl;
}
