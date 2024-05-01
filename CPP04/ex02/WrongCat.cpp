#include "WrongCat.hpp"


WrongCat::WrongCat()
{
	std::cout << "WrongCat Constructor Called" << std::endl;
	this->set_type("WrongCat");
}
WrongCat::~WrongCat()
{
	std::cout << "WrongCat Destructor Called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& obj)
{
	std::cout << "WrongCat copy Constructor Called" << std::endl;
	*this = obj;
}

WrongCat& WrongCat::operator=(const WrongCat& obj)
{
	std::cout << "WrongCat operator Assigment Operator Called" << std::endl;
	this->type = obj.type;
	return (*this);
}

void WrongCat::makeSound() const
{
	std::cout << "MoewMoew" << std::endl;
}
