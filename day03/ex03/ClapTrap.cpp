#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _name(name)
{
	this->_hp = 10;
	this->_energy = 10;
	this->_attack = 0;
}


ClapTrap::ClapTrap(const ClapTrap& claptrap)
{
	this->_name = claptrap._name;
	this->_hp = claptrap._hp;
	this->_energy = claptrap._energy;
	this->_attack = claptrap._attack;
}

ClapTrap::~ClapTrap()
{

}

ClapTrap&	ClapTrap::operator=(const ClapTrap& claptrap)
{
	this->_name = claptrap._name;
	this->_hp = claptrap._hp;
	this->_energy = claptrap._energy;
	this->_attack = claptrap._attack;

	return (*this);
}

void		ClapTrap::attack(const std::string& target)
{
	std::cout << "ClapTrap " << this->_name
		<< " attack " << target <<", causing " << this->_attack
		<< " points of damage!" << std::endl;
}

void		ClapTrap::takeDamage(unsigned int amount)
{
	this->_hp -= (int)amount;
}

void		ClapTrap::beRepaired(unsigned int amount)
{
	this->_hp += amount;
}
