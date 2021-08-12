#include "HumanA.hpp"
#include <iostream>

HumanA::~HumanA()
{
}

HumanA::HumanA(std::string name, Weapon &weapon) : _weapon(weapon)
{
	this->_name = name;
}

void	HumanA::attack() const
{
	std::cout << this->_name << " attacks with his "
		<< this->_weapon.getType() << std::endl;
}

void	HumanA::setWeapon(Weapon &weapon)
{
	this->_weapon = weapon;
}
