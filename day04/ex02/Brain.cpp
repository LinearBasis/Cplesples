#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "brain is born" << std::endl;
}

Brain::Brain(const Brain& copy)
{
	for (int i = 0; i < 100; i++)
	{
		this->_ideas[i] = copy._ideas[i];
	}
}

Brain::~Brain()
{
	std::cout << "brain is dead" << std::endl;
}

Brain&	Brain::operator=(const Brain& copy)
{
	if (this == &copy)
		return (*this);
	for (int i = 0; i < 100; i++)
	{
		this->_ideas[i] = copy._ideas[i];
	}
	return (*this);
}

std::string	Brain::getIdea(int id)
{
	if (id >= 100 || id < 0)
		return ("");
	return (this->_ideas[id]);
}

void		Brain::setIdea(std::string str, int id)
{
	if (id >= 100 || id < 0)
		return ;
	this->_ideas[id] = str;
}
