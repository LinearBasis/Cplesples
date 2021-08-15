#include "Brain.hpp"

Brain::Brain()
{
	
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

}

Brain&	Brain::operator=(const Brain& copy)
{
	if (this == &copy)
		return (*this);
	for (int i = 0; i < 100; i++)
	{
		this->_ideas[i] = copy._ideas[i];
	}
}