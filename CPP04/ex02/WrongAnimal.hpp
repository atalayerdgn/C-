#pragma once

#include <iostream>

class WrongAnimal
{
	protected:
		std::string type;
	public:
		WrongAnimal();
		virtual ~WrongAnimal();
		void set_type(std::string type);
		std::string getType() const;
		WrongAnimal& operator=(const WrongAnimal& obj);
		WrongAnimal(const WrongAnimal& obj);
		void makeSound() const;
};
