#include "Animal.hpp"

Animal::Animal(std::string type)
{
	std::cout << "Animal born\n";
	this->_type = type;
}

Animal::~Animal()
{

}

Animal::Animal(const Animal& copy)
{

	this->_type = copy._type;
}

Animal&	Animal::operator=(const Animal& copy)
{
	this->_type = copy._type;
	return (*this);
}


void		Animal::makeSound() const
{
	std::cout << "I can't breathe\n";
}

std::string	Animal::getType() const
{
	return (this->_type);
}

void		Animal::setType(std::string newType)
{
	this->_type = newType;
}
