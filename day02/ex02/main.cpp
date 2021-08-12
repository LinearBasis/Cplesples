#include <iostream>
#include "Fixed.hpp"

void	my_tests()
{
	Fixed	a(1.25f);
	Fixed	b(4);

	std::cout << "MY TESTS BEGIN" << std::endl;
	std::cout << a - b << std::endl;
	std::cout << a + b << std::endl;
	std::cout << a / b << std::endl;
	std::cout << a * b << std::endl;
	std::cout << Fixed(1) / Fixed(3) << std::endl;
	std::cout << (a < b) << std::endl;
	std::cout << "MY TESTS END" << std::endl;
}

int main( void )
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;

	my_tests();
	return 0;
}