#include "Cat.hpp"


Cat::Cat(void)
{
	std::cout << "Default constructor called (Cat)"<< std::endl;
	this->_brain = new Brain();
	set_type("Cat");
}

Cat::Cat(const std::string idea)
{
	std::cout << "Idea parameterized constructor called (Cat)" << std::endl;
	this->_brain = new Brain(idea);
	set_type("Cat");
}

Cat::Cat(const Cat& copy)
{
	std::cout << "Copy constructor called (Cat)" << std::endl;
	this->_brain = new Brain(copy.getBrain());
	this->type = copy.getType();
}

Cat::~Cat(void)
{
	delete this->_brain;
	std::cout << "Destructor called (Cat)" << std::endl;
}

Cat&	Cat::operator=(const Cat& other)
{
	std::cout << "Copy assignment operator called (Cat)" << std::endl;
	if (this != &other)
	{
		*this->_brain = other.getBrain();
		this->type = other.getType();
	}
	return (*this);
}

void	Cat::setBrain(const std::string idea)
{
	delete this->_brain;
	this->_brain = new Brain(idea);
}

void	Cat::setBrain(const Brain& newBrain)
{
	delete this->_brain;
	this->_brain = new Brain(newBrain);
}

const Brain&	Cat::getBrain(void) const
{
	return (*this->_brain);
}

void	Cat::makeSound(void) const
{
	std::cout << "Meow! Meow! Meow!" << std:: endl;
}
