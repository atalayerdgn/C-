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
	Fixed(int param);
	Fixed(float param);
	Fixed(const Fixed& other);
	Fixed& operator=(const Fixed& other);
	int getRawBits( void ) const;
	void setRawBits( int const raw );
	float toFloat( void ) const;
	int toInt( void ) const;
	bool operator>(const Fixed& other);
	bool operator<(const Fixed& other);
	bool operator>=(const Fixed& other);
	bool operator<=(const Fixed& other);
	bool operator==(const Fixed& other);
	bool operator!=(const Fixed& other);
	Fixed& operator++();
	Fixed& operator--();
	Fixed operator++(int);
	Fixed operator--(int);
	Fixed operator+(const Fixed& other);
	Fixed operator-(const Fixed& other);
	Fixed operator*(const Fixed& other);
	Fixed operator/(const Fixed& other);
	static Fixed& max(Fixed& a, Fixed& b);
	static const Fixed max(const Fixed a, const Fixed b);
	static Fixed& min(Fixed& a, Fixed& b);
	static const Fixed min(const Fixed a, const Fixed b);
	~Fixed(void);
};

std::ostream& operator<<(std::ostream& out ,const Fixed& obj);
