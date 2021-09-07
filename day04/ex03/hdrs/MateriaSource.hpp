#pragma once

#include <iostream>
#include <string>
#include "IMateriaSource.hpp"


class MateriaSource : public IMateriaSource
{
private:
	AMateria	*_learnedMaterials[4];
public:
	MateriaSource();
	MateriaSource(const MateriaSource& copy);
	~MateriaSource();

	MateriaSource&	operator=(const MateriaSource& copy);

	virtual void learnMateria(AMateria*);
	virtual AMateria* createMateria(std::string const & type);
};



