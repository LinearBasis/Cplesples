#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << "Dog born\n";
}

Dog::~Dog()
{
	std::cout << "Dog died\n";
}

void	Dog::makeSound() const
{
	std::cout << "AUF\n";
}
