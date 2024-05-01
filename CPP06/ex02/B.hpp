#pragma once


#include "Base.hpp"
class B:public Base
{};

class notBexception:public std::exception
{
	public:
	const char* what() const throw()
	{
		return ("This is not B object...");
	}
};
