#include "../hdrs/Ice.hpp"

Ice::Ice()
{
	this->_type = "ice";
}

Ice::Ice(const Ice& copy)
{
	this->_type = copy._type;
}

Ice::~Ice()
{

}

Ice&	Ice::operator=(const Ice& copy)
{
	if (this == &copy)
		return (*this);
	this->_type = copy._type;
	return (*this);
}


AMateria*	Ice::clone() const
{
	AMateria*	ice = new Ice();

	return (ice);
}