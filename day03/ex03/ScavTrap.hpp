#pragma once

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class ScavTrap : public virtual ClapTrap
{
private:

public:
	ScavTrap(std::string name = "Dacia Nicki");
	ScavTrap(const ScavTrap& copy);
	virtual ~ScavTrap();

	void		guardGate();
	void		attack(const std::string& target);
	// ScavTrap&	operator=(const ScavTrap& copy);
};



