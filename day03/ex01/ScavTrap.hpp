#pragma once

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
private:

public:
	ScavTrap(std::string name = "Dacia Nicki");
	~ScavTrap();
	void		guardGate();
	void		attack(const std::string& target);
};

