#include "Dog.hpp"


Dog::Dog(void)
{
	std::cout << "Default constructor called (Dog)"<< std::endl;
	this->_brain = new Brain();
	set_type("Dog");
}

Dog::Dog(const std::string idea)
{
	std::cout << "Idea parameterized constructor called (Dog)" << std::endl;
	this->_brain = new Brain(idea);
	set_type("Dog");
}

Dog::Dog(const Dog& copy)
{
	std::cout << "Copy constructor called (Dog)" << std::endl;
	this->_brain = new Brain(copy.getBrain());
	this->type = copy.getType();
}

Dog::~Dog(void)
{
	delete this->_brain;
	std::cout << "Destructor called (Dog)" << std::endl;
}

Dog&	Dog::operator=(const Dog& other)
{
	std::cout << "Copy assignment operator called (Dog)" << std::endl;
	if (this != &other)
	{
		*this->_brain = other.getBrain();
		this->type = other.getType();
	}
	return (*this);
}

void	Dog::setBrain(const std::string idea)
{
	delete this->_brain;
	this->_brain = new Brain(idea);
}

void	Dog::setBrain(const Brain& newBrain)
{
	delete this->_brain;
	this->_brain = new Brain(newBrain);
}

const Brain&	Dog::getBrain(void) const
{
	return (*this->_brain);
}

void	Dog::makeSound(void) const
{
	std::cout << "haw haw haw!" << std:: endl;
}
