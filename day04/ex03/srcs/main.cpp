#include "../hdrs/MateriaSource.hpp"
#include "../hdrs/Ice.hpp"
#include "../hdrs/Cure.hpp"
#include "../hdrs/Character.hpp"
#include <unistd.h>

void	a()
{
	Character		*ch = new Character("Me");
	Character		*target = new Character("Enemy");
	ICharacter		*ch2 = new Character(*ch);

	*ch2 = *ch;


	MateriaSource	*fabric = new MateriaSource();
	AMateria		*ice = new Ice();
	AMateria		*cure = new Cure();

	fabric->learnMateria(ice);
	fabric->learnMateria(cure);

	fabric->learnMateria(ice);
	fabric->learnMateria(cure);

	ch->equip(fabric->createMateria("ice"));
	// ch->unequip(0);
	ch->equip(fabric->createMateria("ice"));
	ch->equip(fabric->createMateria("cure"));
	ch->equip(fabric->createMateria("cure"));
	ch->use(1, *target);

	delete	ch;
	(void)ch2;
	delete	ch2;
	delete	target;

	delete	fabric;
	delete	ice;
	delete	cure;
}

int		main()
{
	a();
	// sleep(10);
	// pause();
}