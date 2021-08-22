#pragma once

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
private:

public:
	ScavTrap(std::string name = "Dacia Nicki");
	ScavTrap(const ScavTrap& copy);
	virtual ~ScavTrap();
	ScavTrap&	operator=(const ScavTrap& copy);

	void		guardGate();
	void		attack(const std::string& target);
};



