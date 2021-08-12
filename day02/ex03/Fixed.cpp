#include "Fixed.hpp"

Fixed::Fixed()
{
	this->_value = 0;
}

Fixed::Fixed(const Fixed& fixed)
{
	*this = fixed;
}

Fixed&	Fixed::operator=(const Fixed& fixed)
{
	if (this == &fixed)
		return (*this);
	this->_value = fixed._value;
	return (*this);
}

Fixed::~Fixed()
{
}

int		Fixed::getRawBits(void) const
{
	return (_value);
}

void	Fixed::setRawBits(int const raw)
{
	this->_value = raw;
}
Fixed::Fixed(int value)
{
	this->_value = (value << fractions);
}

Fixed::Fixed(float value)
{
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

Fixed	Fixed::operator+(const Fixed& fixed) const
{
	Fixed	ans(*this);

	ans += fixed;
	return (ans);
}

Fixed	Fixed::operator-(const Fixed& fixed) const
{
	Fixed	ans(*this);

	ans -= fixed;
	return (ans);
}

Fixed	Fixed::operator*(const Fixed& fixed) const
{
	Fixed	ans(*this);

	ans *= fixed;
	return (ans);
}

Fixed	Fixed::operator/(const Fixed& fixed) const
{
	Fixed	ans(*this);

	ans /= fixed;
	return (ans);
}

Fixed	&Fixed::operator+=(const Fixed& fixed)
{
	this->_value += fixed._value;
	return (*this);
}

Fixed	&Fixed::operator-=(const Fixed& fixed)
{
	this->_value -= fixed._value;
	return (*this);
}

Fixed	&Fixed::operator*=(const Fixed& fixed)
{
	long	a;

	a = (long)this->_value;

	a *= fixed._value;
	a >>= fractions;
	this->_value = (int)a;
	return (*this);
}

Fixed	&Fixed::operator/=(const Fixed& fixed)
{
	long	a;
	long	b;

	a = this->_value << (fractions);
	b = fixed._value;

	a /= b;

	this->_value = (int)a;
	return (*this);
}


Fixed	Fixed::operator++( int )
{
	Fixed	ans(*this);
	this->_value += 1;
	return (ans);
}

Fixed&	Fixed::operator++()
{
	this->_value += 1;
	return (*this);
}

bool	Fixed::operator<(const Fixed& fixed) const
{
	return (this->_value < fixed._value);
}

bool	Fixed::operator>(const Fixed& fixed) const
{
	return (this->_value > fixed._value);
}

bool	Fixed::operator<=(const Fixed& fixed) const
{
	return (this->_value <= fixed._value);
}

bool	Fixed::operator>=(const Fixed& fixed) const
{
	return (this->_value >= fixed._value);
}

bool	Fixed::operator==(const Fixed& fixed) const
{
	return (this->_value == fixed._value);
}

bool	Fixed::operator!=(const Fixed& fixed) const
{
	return (this->_value != fixed._value);
}

const Fixed&	Fixed::max( const Fixed& fixed1, const Fixed& fixed2 )
{
	if (fixed1 > fixed2)
		return (fixed1);
	return (fixed2);
}

Fixed&	Fixed::max( Fixed& fixed1, Fixed& fixed2 )
{
	if (fixed1 > fixed2)
		return (fixed1);
	return (fixed2);
}

const Fixed&	Fixed::min( const Fixed& fixed1, const Fixed& fixed2 )
{
	if (fixed1 < fixed2)
		return (fixed1);
	return (fixed2);
}

Fixed&	Fixed::min( Fixed& fixed1, Fixed& fixed2 )
{
	if (fixed1 < fixed2)
		return (fixed1);
	return (fixed2);
}
