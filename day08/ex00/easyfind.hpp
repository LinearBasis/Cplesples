#pragma once
#include <exception>
#include <algorithm>

template <class T>
int		easyfind(T contaiter, int to_find)
{
	typename T::iterator a = std::find(contaiter.begin(), contaiter.end(), to_find);
	if (a == contaiter.end())
		throw std::exception();
	return (*a);
}