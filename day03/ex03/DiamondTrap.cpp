#include "DiamondTrap.hpp"

//		пути решения дикого костыля:
//	1)	создать отдельные переменные внутри frag и scav, чтобы они были фактически разными
//	3)	не сдавать этот проект
DiamondTrap::DiamondTrap(std::string name)
	: ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name)
{
	this->_name = name;
	this->_hp = 100;		// Дичайший костыль во вселенной
	this->_attack = 30;
}

DiamondTrap::~DiamondTrap()
{
	
}


void	DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}
void	DiamondTrap::whoAmI()
{
	std::cout << "I am " << this->_name << std::endl;
	std::cout << "Claptrap is " << ClapTrap::_name << std::endl;
}

DiamondTrap&	DiamondTrap::operator=(const DiamondTrap& copy)
{
	if (this == &copy)
		return (*this);
	this->ClapTrap::operator=(copy);
	return (*this);
}

DiamondTrap::DiamondTrap(const DiamondTrap& copy)
{
	this->ClapTrap::operator=(copy);
}
