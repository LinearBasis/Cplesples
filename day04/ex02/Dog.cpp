#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << "Dog born\n";
	this->_brain = new Brain();
}

Dog::~Dog()
{
	std::cout << "Dog died\n";
	delete this->_brain;
}

void	Dog::makeSound() const
{
	std::cout << "AUF\n";
}

Dog::Dog(const Dog& copy)
{
	this->_brain = nullptr;
	if (copy._brain)
		this->_brain = new Brain(*copy._brain);
	this->_type = copy._type;
}

Dog&	Dog::operator=(const Dog& copy)
{
	if (&copy == this)
		return (*this);
	this->_type = copy._type;
	this->_brain = nullptr;
	if (copy._brain)
		this->_brain = new Brain(*copy._brain);
	return (*this);
}