#include "serialize.hpp"
#include <iostream>

int		main()
{
	Data		*asd = new Data();
	uintptr_t	zachem	= serialize(asd);

	Data		*bef = deserialize(zachem);

	std::cout << bef->a << std::endl;
}