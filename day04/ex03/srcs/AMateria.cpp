#include "../hdrs/AMateria.hpp"
// #include "../hdrs/ICharacter.hpp"
#include "../hdrs/Character.hpp"


AMateria::AMateria()
{
	this->_type = "hmm";
}

AMateria::AMateria(const AMateria& copy)
{
	this->_type = copy._type;
}

AMateria&	AMateria::operator=(const AMateria& copy)
{
	if (this == &copy)
		return (*this);
	this->_type = copy._type;
	return (*this);
}

AMateria::~AMateria()
{
}

std::string const & AMateria::getType() const
{
	return (this->_type);
}

void				AMateria::use(ICharacter& target)
{
	if (this->_type == "ice")
	{
		std::cout << "* shoots an ice bolt at " << target.getName() << " *\n";
	}
	else if (this->_type == "cure")
	{
		std::cout << "* heals "<< target.getName() << "’s wounds *\n";
	}
}