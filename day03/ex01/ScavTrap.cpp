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

// ScavTrap&	ScavTrap::operator=(const ScavTrap& copy)
// {
	// if (this == &copy)
	// 	return (*this);
	// this->_name = copy._name;
	// this->_hp = copy._hp;
	// this->_energy = copy._energy;
	// this->_attack = copy._attack;
	
// }

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