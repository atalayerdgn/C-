#pragma once


#include "Base.hpp"

class C:public Base
{};

class notCexception:public std::exception
{
	public:
	const char* what() const throw()
	{
		return ("This is not C object...");
	}
};