#pragma once

#include "WrongAnimal.hpp"



class WrongCat : public WrongAnimal
{
	public:
	WrongCat();
	~WrongCat();
	WrongCat(const WrongCat& obj);
	WrongCat& operator=(const WrongCat& obj);
	void makeSound() const;
};
