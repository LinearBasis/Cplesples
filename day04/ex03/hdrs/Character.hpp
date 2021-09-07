#pragma once

#include <iostream>
#include <string>
#include "ICharacter.hpp"
class Character : public ICharacter
{
private:
	std::string	_name;

	AMateria	*_materias[4];
	int			_num_of_materias;

public:
	Character(std::string name = "Dacia Nicki");
	Character(const Character& copy);
	~Character();
	
	Character&	operator=(const Character& copy);

	virtual std::string const & getName() const;
	virtual void equip(AMateria* m);
	virtual void unequip(int idx);
	virtual void use(int idx, ICharacter& target);
};



