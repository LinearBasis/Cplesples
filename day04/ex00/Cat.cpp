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
