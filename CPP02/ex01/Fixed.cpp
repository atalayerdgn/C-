#include "Fixed.hpp"

Fixed::~Fixed(void)
{
	std::cout << "Destructor Called" << std::endl;
}
void Fixed::setRawBits( int const raw )
{
	this->variable = raw;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->variable);
}

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	this->setRawBits(0);
}
Fixed& Fixed::operator=(const Fixed& other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->setRawBits(other.variable);
	return (*this);
}

Fixed::Fixed(int param)
{
	std::cout << "Int Constructor Called" << std::endl;
	this->variable = param << staticvariable;
}

Fixed::Fixed(float param)
{
	std::cout << "Float Constructor Called" << std::endl;
	this->variable = roundf(param * (1 << staticvariable));
}

Fixed::Fixed(const Fixed& other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

float Fixed::toFloat( void ) const
{
	return (static_cast<float>(this->variable) / (1 << staticvariable));
}

int Fixed::toInt( void ) const
{
	return (static_cast<int>(this->variable) >> staticvariable);
}

std::ostream& operator<<(std::ostream& out ,const Fixed& obj)
{
	out << obj.toFloat();
	return (out);
}
