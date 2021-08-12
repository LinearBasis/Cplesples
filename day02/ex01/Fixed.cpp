#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->_value = 0;
}

Fixed::Fixed(const Fixed& fixed)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
}

Fixed&	Fixed::operator=(const Fixed& fixed)
{
	std::cout << "Assignation operator called" << std::endl;
	this->_value = fixed._value;
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int		Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (_value);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_value = raw;
}
Fixed::Fixed(int value)
{
	std::cout << "Int constructor called" << std::endl;
	this->_value = (value << fractions);
}

Fixed::Fixed(float value)
{
	std::cout << "Float constructor called" << std::endl;
	value = value * (1 << fractions);
	value = roundf(value);
	this->_value = (int)(value);
}

float	Fixed::toFloat(void) const
{
	return ((float)this->_value / (1 << fractions));
}

int		Fixed::toInt(void) const
{
	return (this->_value >> fractions);
}

std::ostream	&operator<<(std::ostream &out, const Fixed& fixed)
{
	out << fixed.toFloat();
	return (out);
}

