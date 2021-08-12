#pragma once

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
private:

public:
	ScavTrap(std::string name = "Dacia Nicki");
	void		guardGate();
	void		attack(const std::string& target);
};

