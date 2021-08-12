#include "Zombie.hpp"

int	main()
{
	Zombie	*zombiz = zombieHorde(5, "zombie with a cone");

	zombiz[2].announce();
	delete[] zombiz;
}