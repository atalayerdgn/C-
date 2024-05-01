#pragma once

#include <iostream>

class ScalarConverter
{
	private:
	ScalarConverter();
	~ScalarConverter();
	ScalarConverter(const ScalarConverter& oth);
	ScalarConverter& operator=(const ScalarConverter& oth);
	public:
	static void	convert(std::string str);
};
class novaluexception:public std::exception
{
	public:
	const char* what() const throw()
	{
		return ("nan value");
	}
};
