#pragma once

#include <iostream>

class Fixed
{
	private:
		int variable;
		static const int staticvariable = 8;
	public:
	Fixed(void);
	~Fixed(void);
	Fixed(const Fixed& other);
	Fixed& operator=(const Fixed& other);
	int getRawBits( void ) const;
	void setRawBits( int const raw );
};
