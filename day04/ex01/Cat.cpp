#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << "Cat born\n";
}

Cat::~Cat()
{
	std::cout << "Cat died\n";
}

void		Cat::makeSound() const
{
	std::cout << "MEOW\n";
}

Cat::Cat(const Cat& copy)
{

	this->_type = copy._type;
}

Cat&	Cat::operator=(const Cat& copy)
{
	this->_type = copy._type;
	return (*this);
}