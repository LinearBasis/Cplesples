#pragma once
#include "Weapon.hpp"
class HumanA
{
private:
	Weapon		&_weapon;
	std::string	_name;
public:
	void	attack() const;
	void	setWeapon(Weapon &weapon);
	HumanA(std::string name, Weapon &weapon);
	~HumanA();
};

