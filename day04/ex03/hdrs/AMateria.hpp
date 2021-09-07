#pragma once

#include <iostream>
#include <string>
// #include "ICharacter.hpp"
#define _DEBUG


class	ICharacter;

class AMateria
{
protected:
	std::string	_type;
public:
	AMateria();
	virtual ~AMateria();
	AMateria(const AMateria& copy);
	AMateria&	operator=(const AMateria& copy);

	std::string const & getType() const;
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};



