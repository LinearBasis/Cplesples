#include <iostream>
#include <vector>
#include "Span.hpp"

#include <ctime>

int	main()
{
	std::vector<int> a;

	std::srand(clock());
	for (int i = 0; i < 10000000; i++)
		a.push_back(rand() % 1000000);

	a.push_back(3);
	a.push_back(6);
	a.push_back(3);

	a.push_back(10);
	a.push_back(8);


	Span	span;
	std::map<int, int>	b;

	b.

	// span.addNumber(a.begin(), a.end());
	unsigned int	start_time = clock();
	for (size_t i = 0; i < a.size(); i++)
	{
		span.addNumber(a[i]);
	}
	std::cout << span.longestSpan() << std::endl;
	std::cout << span.shortestSpan() << std::endl;
	unsigned int	end_time = clock();

	std::cout << "time - " << (end_time - start_time) / 1000000.0 << std::endl;
}