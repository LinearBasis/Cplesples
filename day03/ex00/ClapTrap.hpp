#pragma once

#include <string>
#include <iostream>

class ClapTrap
{
private:
	std::string	_name;
	int			_hp;
	int			_energy;
	int			_attack;
public:
	ClapTrap(std::string name = "Dacia Nicki");
	~ClapTrap();
	ClapTrap(const ClapTrap& claptrap);
	ClapTrap&	operator=(const ClapTrap& claptrap);

	void		attack(const std::string& target);
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);

};


