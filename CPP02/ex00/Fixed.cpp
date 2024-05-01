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
	this->variable = other.getRawBits();
	return (*this);
}

Fixed::Fixed(const Fixed& other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}



