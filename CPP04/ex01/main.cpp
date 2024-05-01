#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main(void)
{
	Animal* dsds = new Cat("dsklalaslk");
	dsds->set_type("Casf");
	delete dsds;
	const Animal* animals[10];

		for (int i = 0; i < 10; i++)
		{
			if (i % 2 == 0)
				animals[i] = new Dog("2+2=4");
			else
				animals[i] = new Cat("2+2=5");
		}
		for (int i = 0; i < 10; i++)
		{
			animals[i]->makeSound();
		}
		for (int i = 0; i < 10; i++)
		{
			delete animals[i];
		}
	return (0);
}
