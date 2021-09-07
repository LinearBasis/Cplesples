#pragma once

#include <iostream>
#include <string>
#include "AMateria.hpp"

class Ice : public AMateria
{
private:

public:
	Ice();
	Ice(const Ice& copy);
	~Ice();

	Ice&	operator=(const Ice& copy);

	virtual AMateria* clone() const;
};

