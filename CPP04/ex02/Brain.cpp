#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Default constructor called (Brain)" << std::endl;
	setIdea("");
}

Brain::Brain(const std::string idea)
{
	std::cout << "Idea parameterized constructor called (Brain)" << std::endl;
	setIdea(idea);
}

Brain::Brain(const Brain& copy)
{
	std::cout << "Copy constructor called (Brain)" << std::endl;
	*this = copy;
}

Brain::~Brain(void)
{
	std::cout << "Destructor called (Brain)" << std::endl;
}

Brain&	Brain::operator=(const Brain& other)
{
	std::cout << "Copy assignment operator called (Brain)" << std::endl;
	if (this != &other)
	{
		setIdea(other.getIdea());
	}
	return (*this);
}

void	Brain::setIdea(const std::string idea)
{
	for (int idx = 0; idx < 100; idx++)
		this->_ideas[idx] = idea;
}

void	Brain::setIdea(unsigned int idx, const std::string idea)
{
	if (idx < 0 || 99 < idx)
		return ;
	this->_ideas[idx] = idea;
}

const std::string&	Brain::getIdea(void) const
{
	return (this->_ideas[0]);
}

const std::string&	Brain::getIdea(unsigned int idx) const
{
	if (idx > 99)
		idx = 0;
	return (this->_ideas[idx]);
}
