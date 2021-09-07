#pragma once

#include <iostream>
#include <string>
#include "AMateria.hpp"

class Cure : public AMateria
{
private:

public:
	Cure();
	Cure(const Cure& copy);
	~Cure();

	Cure&	operator=(const Cure& copy);
	
	virtual AMateria* clone() const;
};

