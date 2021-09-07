#pragma once
#include <iostream>

template <class T>
void	iter(T* arr, size_t len, T (*f)(T))
{
	if (!arr)
		throw std::invalid_argument("nullptr array");
	for (size_t i = 0; i < len; i++)
	{
		std::cout << f(arr[i]) << " ";
	}
	std::cout << std::endl;
}
