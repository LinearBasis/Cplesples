#include "iter.hpp"
#include <cmath>

int		main()
{
	float	a[] = {1, 4, 9, 16, 25, 36};

	iter(a, 6, std::sqrt);
}