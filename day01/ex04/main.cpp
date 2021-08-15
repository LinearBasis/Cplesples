#include "replacer.hpp"

#include <iostream>

int		main()
{
	system("cp test2 test");
	// system("cat test");
	replace("test", "ab", "aab");
}