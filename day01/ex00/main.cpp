#include "Zombie.hpp"

int	main()
{
	Zombie	*drZomboss = new Zombie();

	randomChump("Zombie Yeti");
	drZomboss->announce();
	delete drZomboss;
	Zombie	pogoZombie("Pogo Zombie");
	pogoZombie.announce();
	pogoZombie = Zombie("second Pogo Zombie");
	pogoZombie = Zombie("third Pogo Zombie");
}