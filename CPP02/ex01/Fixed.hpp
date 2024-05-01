#pragma once

#include <iostream>
#include <ostream>

class Fixed
{
	private:
		int variable;
		static const int staticvariable = 8;
	public:
	Fixed(void);
	~Fixed(void);
	Fixed(int param);
	Fixed(float param);
	Fixed(const Fixed& other);
	Fixed& operator=(const Fixed& other);
	int getRawBits( void ) const;
	void setRawBits( int const raw );
	float toFloat( void ) const;
	int toInt( void ) const;
};

std::ostream& operator<<(std::ostream& out ,const Fixed& obj);
