#include "Weapon.hpp"

Weapon::Weapon(/* args */)
{
	this->_type = "default weapon";
}

Weapon::Weapon(std::string type)
{
	this->_type = type;
}

Weapon::~Weapon()
{

}

const	std::string &Weapon::getType() const
{
	return (_type);
}
void	Weapon::setType(std::string type)
{
	this->_type = type;
}
