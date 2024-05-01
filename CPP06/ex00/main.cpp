#include "ScalarConverter.hpp"


int main (int ac, char **av)
{
	try
	{
		if (ac == 2)
		{
			if (av[1][0] == '\0')
				throw novaluexception();
			ScalarConverter::convert(av[1]);
		}
		else
			throw novaluexception();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
