#include "Array.hpp"
#include <unistd.h>

int		main()
{
	Array<int, 3>	arr;
	for (int i = 0; i < 3; i++)
	{
		arr[i] = i * i;
	}
	for (int i = 0; i < 3; i++)
	{
		std::cout << arr[i] << " ";
	}
	Array<int, 3> arr2 = arr;

	Array<int, 3> arr3;
	arr3 = arr;
	for (int i = 0; i < 3; i++)
	{
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;
}