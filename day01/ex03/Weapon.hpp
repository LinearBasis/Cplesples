#pragma once
#include <string>

class Weapon
{
private:
	std::string	_type;
public:
	const	std::string	&getType() const;
	void	setType(std::string type);
	Weapon(/* args */);
	~Weapon();
	Weapon(std::string type);
};
