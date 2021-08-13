#pragma once

#include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap
{
private:

public:
	FragTrap(std::string name = "Dacia Nicki");
	~FragTrap();
	void	attack(const std::string& target);
	void	highFivesGuys(void);
};

