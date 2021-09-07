#include "../hdrs/Character.hpp"
#include "../hdrs/AMateria.hpp"

Character::Character(std::string name)
{
	this->_name = name;
	this->_num_of_materias = 0;
	for (int i = 0; i < 4; i++)
		this->_materias[i] = nullptr;
}

Character::Character(const Character& copy)
{
	int i;
	this->_name = copy._name;
	this->_num_of_materias = copy._num_of_materias;
	for (i = 0; copy._materias[i]; i++)
	{
		this->_materias[i] = copy._materias[i]->clone();
	}
	for (; i < 4; i++)
	{
		this->_materias[i] = nullptr;
	}
}

Character::~Character()
{
	for (int i = 0; i < this->_num_of_materias; i++)
	{
		delete this->_materias[i];
	}
}

Character&	Character::operator=(const Character& copy)
{
	if (this == &copy)
		return (*this);
	this->_name = copy._name;
	this->_num_of_materias = copy._num_of_materias;
	for (int i = 0; i < 4; i++)
		this->_materias[i] = copy._materias[i]->clone();
	return (*this);
}

std::string const &	Character::getName() const
{
	return (this->_name);
}

void	Character::equip(AMateria* m)
{
	if (this->_num_of_materias == 4)
	{
		return ;
	}
	this->_materias[this->_num_of_materias] = m;
	this->_num_of_materias++;
}

void	Character::unequip(int idx)
{
	for (int i = idx; i < this->_num_of_materias - 1; i++)
	{
		this->_materias[i] = this->_materias[i + 1];
	}
	if (idx < this->_num_of_materias)
	{
		this->_materias[this->_num_of_materias - 1] = nullptr;
		this->_num_of_materias--;
	}
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx >= this->_num_of_materias)
		return ;
	
	this->_materias[idx]->use(target);
}