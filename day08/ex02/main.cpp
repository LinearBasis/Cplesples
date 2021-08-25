#include "MutantStack.hpp"

int		main()
{
	MutantStack	<int>	stack;

	MutantStack<int>::iterator	iter;
	MutantStack<int>::const_reverse_iterator	iter2;
	stack.push(1);
	stack.push(2);
	stack.push(3);
	stack.push(4);

	for (iter = stack.begin(); iter != stack.end(); iter++)
	{
		std::cout << *iter << std::endl;
	}
	for (iter2 = stack.rbegin(); iter2 != stack.rend(); iter2++)
	{
		std::cout << *iter2 << std::endl;
	}		
}