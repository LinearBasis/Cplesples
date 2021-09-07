#include "../hdrs/Cure.hpp"

Cure::Cure()
{
	this->_type = "cure";
}

Cure::Cure(const Cure& copy)
{
	this->_type = copy._type;
}

Cure::~Cure()
{
}

Cure&	Cure::operator=(const Cure& copy)
{
	if (this == &copy)
		return (*this);
	this->_type = copy._type;
	return (*this);
}

AMateria*	Cure::clone() const
{
	AMateria*	cure = new Cure();

	return (cure);
}