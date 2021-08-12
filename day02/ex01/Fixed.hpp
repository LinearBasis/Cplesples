#pragma once

#include <iostream>	
#include <cmath>

class Fixed
{
private:
	int					_value;
	static const int	fractions = 8;
public:
	Fixed();
	Fixed(const Fixed& fixed);
	Fixed&	operator=(const Fixed& fixed);
	~Fixed();


	float				toFloat(void) const;
	int					toInt(void) const;
	Fixed(int value);
	Fixed(float value);
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
};
std::ostream	&operator<<(std::ostream &out, const Fixed& fixed);

