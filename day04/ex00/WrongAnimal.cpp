#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{

}

WrongAnimal::WrongAnimal(const WrongAnimal& copy)
{
	(void)copy;
}

WrongAnimal::~WrongAnimal()
{

}

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal& copy)
{
	if (this == &copy)
		return (*this);
	return (*this);
}

void			WrongAnimal::makeSound() const
{
	std::cout << "Amenanimal\n";
}
