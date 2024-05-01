#pragma once

#include <iostream>

class Animal
{
	protected:
		std::string type;
	public:
		Animal();
		virtual ~Animal();
		void set_type(std::string type);
		std::string getType() const;
		Animal& operator=(const Animal& obj);
		Animal(const Animal& obj);
		virtual void makeSound() const;
};
