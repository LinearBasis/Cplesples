#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->_hp = 100;
	this->_energy = 50;
	this->_attack = 20;
}

ScavTrap::ScavTrap(const ScavTrap& copy) : ClapTrap(copy)
{

}

ScavTrap::~ScavTrap()
{
	
}

ScavTrap&	ScavTrap::operator=(const ScavTrap& copy)
{
	if (this == &copy)
		return (*this);
	this->ClapTrap::operator=(copy);
	return (*this);
}

void	ScavTrap::guardGate()
{
	std::cout << this->_name << " have enterred in Gate keeper mode" << std::endl;
}

void		ScavTrap::attack(const std::string& target)
{
	std::cout << "ScavTrap " << this->_name
		<< " attack " << target <<", causing " << this->_attack
		<< " points of damage!" << std::endl;
}