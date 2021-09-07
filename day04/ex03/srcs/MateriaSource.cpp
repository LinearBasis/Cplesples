#include "../hdrs/MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		this->_learnedMaterials[i] = nullptr;
	}
}

MateriaSource::MateriaSource(const MateriaSource& copy)
{
	int	i;

	for (i = 0; i < 4 && copy._learnedMaterials[i]; i++)
	{
		this->_learnedMaterials[i] = copy._learnedMaterials[i]->clone();
	}
	for (; i < 4; i++)
	{
		this->_learnedMaterials[i] = nullptr;
	}
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4 && this->_learnedMaterials[i]; i++)
	{
		delete this->_learnedMaterials[i];
	}
}

MateriaSource&	MateriaSource::operator=(const MateriaSource& copy)
{
	int	i;
	if (this == &copy)
		return (*this);
	for (i = 0; i < 4 && this->_learnedMaterials[i]; i++)
	{
		delete this->_learnedMaterials[i];
	}
	for (i = 0; i < 4 && copy._learnedMaterials[i]; i++)
	{
		this->_learnedMaterials[i] = copy._learnedMaterials[i]->clone();
	}
	for (; i < 4; i++)
	{
		this->_learnedMaterials[i] = nullptr;
	}
	return (*this);
}

void		MateriaSource::learnMateria(AMateria* materia)
{
	int	i;
	
	for (i = 0; i < 4 && this->_learnedMaterials[i]; i++)
	{
		if (this->_learnedMaterials[i]->getType() == materia->getType())
			return ;
	}
	if (i < 4 && materia != nullptr)
	{
		this->_learnedMaterials[i] = materia->clone();
	}
	#ifdef _DEBUG
		std::cout << "Learned materia called " << materia->getType() << std::endl;
	#endif
}

AMateria*	MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4 && this->_learnedMaterials[i]; i++)
	{
		if (this->_learnedMaterials[i]->getType() == type)
		{
			#ifdef _DEBUG
				std::cout << "Found materia called " << type << std::endl;
			#endif
			return (this->_learnedMaterials[i]->clone());
		}
	}
	#ifdef _DEBUG
		std::cout << "Can't find materia called " << type << std::endl;
	#endif
	return (nullptr);
}