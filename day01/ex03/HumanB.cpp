#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string name)
{
	this->_name = name;
	this->_weapon = nullptr;
}

void	HumanB::attack()
{
	std::cout << _name;
	if (this->_weapon)
	{
		std::cout << " attacks with his "
			<< this->_weapon->getType() << std::endl;
	}
	else
	{
		std::cout << "can't attack" << std::endl;
	}
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
}

HumanB::~HumanB()
{

}
