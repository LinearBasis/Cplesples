#include <iostream>
#include <vector>
#include "easyfind.hpp"

int	main()
{
	std::vector<int> a(5, 0);
	try
	{
		std::cout << easyfind(a, 0) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		std::cout << easyfind(a, 1) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}