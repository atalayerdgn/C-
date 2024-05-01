#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base* generate(void)
{
	srand(time(NULL));
	int	a = rand();
	if (a % 3 == 0)
	{
		std::cout << "Generating A.." << std::endl;
		return (new(A));
	}
	else if (a % 3 == 1)
	{
		std::cout << "Generating B.." << std::endl;
		return (new(B));
	}
	else if (a % 3 == 2)
	{
		std::cout << "Generating C.." << std::endl;
		return (new(C));
	}
	return (nullptr);
}

void	identify(Base *p)
{
	try
	{
		if (dynamic_cast<A*>(p))
			std::cout << "This is A object.." << std::endl;
		else
			throw notAexception();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		if (dynamic_cast<B*>(p))
			std::cout << "This is B object.." << std::endl;
		else
			throw notBexception();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		if (dynamic_cast<C*>(p))
			std::cout << "This is C object.." << std::endl;
		else
			throw notCexception();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

void	identify( Base &p )
{
	try
	{
		A	&a = dynamic_cast<A&>(p);
		std::cout << "A refer" << std::endl;
		(void)a;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		B	&b = dynamic_cast<B&>(p);
		std::cout << "B refer" << std::endl;
		(void)b;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		C	&c = dynamic_cast<C&>(p);
		std::cout << "C refer" << std::endl;
		(void)c;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}

int main(void)
{
	Base *ptr;

	ptr = generate();
	identify(ptr);
	identify(*ptr);

	delete ptr;
    return (0);
}
