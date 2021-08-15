#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << "Cat born\n";
	this->_brain = new Brain();
}

Cat::~Cat()
{
	std::cout << "Cat died\n";
	delete this->_brain;
}

void		Cat::makeSound() const
{
	std::cout << "MEOW\n";
}

Cat::Cat(const Cat& copy)
{
	if (copy._brain)
		this->_brain = new Brain(*copy._brain);
	else
		this->_brain = new Brain();
	this->_type = copy._type;
}

Cat&	Cat::operator=(const Cat& copy)
{
	if (&copy == this)
		return (*this);
	this->_type = copy._type;
	this->_brain = nullptr;
	if (copy._brain)
		this->_brain = new Brain(*copy._brain);
	return (*this);
}

void		Cat::setSomeIdeas(std::string str, int size)
{
	for (int i = 0; i < std::min(100, size); i++)
	{
		this->_brain->setIdea(str, i);
	}
}

void		Cat::printSomeIdeas(int size) const
{
	for (int i = 0; i < std::min(100, size); i++)
	{
		std::cout << this->_brain->getIdea(i) << std::endl;
	}
}
