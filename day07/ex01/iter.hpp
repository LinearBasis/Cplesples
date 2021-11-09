#pragma once
#include <iostream>

namespace a
{
	void	b()
	{

	}
}

template <class T>
void	iter(T* arr, size_t len, void (*f)(T const &))
{
	if (!arr)
		throw std::invalid_argument("nullptr array");
	for (size_t i = 0; i < len; i++)
	{
		f(arr[i]);
	}
	std::cout << std::endl;
}
