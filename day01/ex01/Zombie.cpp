#include "Zombie.hpp"

Zombie::Zombie(/* args */)
{
	this->_name = "Dacia Nicki";
}

Zombie::Zombie(std::string name)
{
	this->_name = name;
}

Zombie::~Zombie()
{
	std::cout << this->_name << " is dead" << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << _name << " BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setName(std::string name)
{
	this->_name = name;
}

Zombie* zombieHorde( int N, std::string name )
{
	Zombie	*zombizz = new Zombie[N];

	for (int i = 0; i < N; i++)
	{
		zombizz[i].setName(name);
	}
	return (zombizz);
}
