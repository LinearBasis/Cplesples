#include "ScavTrap.hpp"

int		main()
{
	ScavTrap	dnicki;

	dnicki.attack("Data Chani");
	dnicki.takeDamage(10);
	dnicki.beRepaired(10);
	ScavTrap dnicki2 = dnicki;
	ScavTrap dnicki3;
	dnicki3 = dnicki;
	dnicki2.attack("Moshe Groot");
	dnicki2.guardGate();
	dnicki3.guardGate();

}