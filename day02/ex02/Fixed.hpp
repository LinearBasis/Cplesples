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
	Fixed( const Fixed& fixed );
	Fixed&	operator=( const Fixed& fixed );
	~Fixed();

	Fixed	operator+( const Fixed& fixed ) const;
	Fixed	operator-( const Fixed& fixed ) const;
	Fixed	operator*( const Fixed& fixed ) const;
	Fixed	operator/( const Fixed& fixed ) const;

	Fixed&	operator+=( const Fixed& fixed );
	Fixed&	operator-=( const Fixed& fixed );
	Fixed&	operator*=( const Fixed& fixed );
	Fixed&	operator/=( const Fixed& fixed );

	Fixed	operator++(int);
	Fixed&	operator++();
	static Fixed&	max( Fixed& fixed1, Fixed& fixed2 );
	static Fixed&	min( Fixed& fixed1, Fixed& fixed2 );
	static const Fixed&	max( const Fixed& fixed1, const Fixed& fixed2 );
	static const Fixed&	min( const Fixed& fixed1, const Fixed& fixed2 );


	bool	operator<( const Fixed& fixed ) const;
	bool	operator>( const Fixed& fixed ) const;
	bool	operator<=( const Fixed& fixed ) const;
	bool	operator>=( const Fixed& fixed ) const;
	bool	operator==( const Fixed& fixed ) const;
	bool	operator!=( const Fixed& fixed ) const;
	

	float				toFloat() const;
	int					toInt() const;
	Fixed( int value );
	Fixed( float value );
	int		getRawBits(void) const;
	void	setRawBits( int const raw );
};
std::ostream	&operator<<(std::ostream &out, const Fixed& fixed);

