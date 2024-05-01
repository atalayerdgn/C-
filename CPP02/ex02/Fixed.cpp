#include "Fixed.hpp"

Fixed::~Fixed(void)
{
}
void Fixed::setRawBits( int const raw )
{
	this->variable = raw;
}

int Fixed::getRawBits(void) const
{
	return (this->variable);
}

Fixed::Fixed(void)
{
	this->setRawBits(0);
}
Fixed& Fixed::operator=(const Fixed& other)
{
	this->setRawBits(other.variable);
	return (*this);
}

Fixed::Fixed(int param)
{
	this->variable = param * (1 << staticvariable);
}

Fixed::Fixed(float param)
{
	this->variable = roundf(param * (1 << staticvariable));
}

Fixed::Fixed(const Fixed& other)
{
	*this = other;
}

float Fixed::toFloat( void ) const
{
	return (static_cast<float>(this->variable) / (1 << staticvariable));
}

int Fixed::toInt( void ) const
{
	return ((this->variable) / (1 << staticvariable));
}

std::ostream& operator<<(std::ostream& out ,const Fixed& obj)
{
	out << obj.toFloat();
	return (out);
}

bool Fixed::operator>(const Fixed& other)
{
	if (variable > other.variable)
		return (true);
	return (false);
}

bool Fixed::operator<(const Fixed& other)
{
	if (variable < other.variable)
		return (true);
	return (false);
}

bool Fixed::operator>=(const Fixed& other)
{
	if (variable >= other.variable)
		return (true);
	return (false);
}

bool Fixed::operator<=(const Fixed& other)
{
	if (variable <= other.variable)
		return (true);
	return (false);
}

bool Fixed::operator==(const Fixed& other)
{
	if (variable == other.variable)
		return (true);
	return (false);
}

bool Fixed::operator!=(const Fixed& other)
{
	if (variable > other.variable)
		return (true);
	return (false);
}

Fixed Fixed::operator+(const Fixed& other)
{
	Fixed temp(this->toFloat() + other.toFloat());
	return (temp);
}

Fixed Fixed::operator-(const Fixed& other)
{
	Fixed temp(this->toFloat() - other.toFloat());
	return (temp);
}

Fixed Fixed::operator/(const Fixed& other)
{
	Fixed temp(this->toFloat() / other.toFloat());
	return (temp);
}

Fixed Fixed::operator*(const Fixed& other)
{
	Fixed temp(this->toFloat() * other.toFloat());
	return (temp);
}

Fixed Fixed::operator++(int)
{
	Fixed temp = *this;
	variable++;
	return (temp);
}

Fixed Fixed::operator--(int)
{
	Fixed temp = *this;
	variable--;
	return (temp);
}
Fixed& Fixed::operator++()
{

	variable = variable + 1;
	return (*this);
}

Fixed& Fixed::operator--()
{
	variable = variable - 1;
	return (*this);
}

Fixed& Fixed::max(Fixed& a, Fixed& b)
{
	if (a > b)
		return a;
	return b;
}

const Fixed Fixed::max(const Fixed a, const Fixed b)
{
	Fixed temp;

	if (a.variable > b.variable)
		temp.setRawBits(a.variable);
	else
		temp.setRawBits(b.variable);
	return (temp);
}
Fixed& Fixed::min(Fixed &a, Fixed &b)
{
	if (a < b)
		return a;
	return b;
}

const Fixed Fixed::min(const Fixed a, const Fixed b)
{
	Fixed temp;

	if (a.variable < b.variable)
		temp.setRawBits(a.variable);
	else
		temp.setRawBits(b.variable);
	return (temp);
}
