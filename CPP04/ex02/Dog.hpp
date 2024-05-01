#pragma once


#include "Animal.hpp"

class Dog : public Animal
{
private:
	Brain *_brain;
public:
	Dog(void);
	Dog(const std::string idea);
	Dog(const Dog& copy);
	~Dog(void);
	Dog&	operator=(const Dog& other);
	void			setBrain(const std::string idea);
	void			setBrain(const Brain& newBrain);
	const Brain&	getBrain(void) const;
	void			makeSound(void) const;
};
