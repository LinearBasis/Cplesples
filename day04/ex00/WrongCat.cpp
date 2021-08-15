#include "WrongCat.hpp"

WrongCat::WrongCat()
{

}

WrongCat::WrongCat(const WrongCat& copy)
{
	(void)copy;
}

WrongCat::~WrongCat()
{

}

WrongCat&	WrongCat::operator=(const WrongCat& copy)
{
	if (this == &copy)
		return (*this);
	return (*this);
}

void		WrongCat::makeSound() const
{
	std::cout << "Auf\n";
}
