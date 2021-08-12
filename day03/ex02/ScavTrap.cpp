#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	_hp = 100;
	_energy = 50;
	_attack = 20;
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