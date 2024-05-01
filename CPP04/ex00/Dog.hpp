#pragma once


#include "Animal.hpp"

class Dog : public Animal
{
	public:
	Dog();
	~Dog();
	Dog(const Dog& obj);
	Dog& operator=(const Dog& obj);
	void	makeSound() const;
};
