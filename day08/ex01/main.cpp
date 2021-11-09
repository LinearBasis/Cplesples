#include <iostream>
#include <vector>
#include "Span.hpp"

#include <ctime>

int	main()
{
	try
	{
		std::vector<int> a;

		std::srand(clock());
		for (int i = 0; i < 12; i++)
			a.push_back(rand() % 7);

		Span	span(a.size());
		unsigned int	start_time = clock();
		span.addNumber(a.begin(), a.end());
		std::cout << span.longestSpan() << std::endl;
		std::cout << span.shortestSpan() << std::endl;
		unsigned int	end_time = clock();
		std::cout << "time - " << (end_time - start_time) / 1000000.0 << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		std::vector<int> a;

		std::srand(clock());
		for (int i = 0; i < 12; i++)
			a.push_back(rand() % 7);

		Span	span(a.size() - 2);
		unsigned int	start_time = clock();
		span.addNumber(a.begin(), a.end());
		std::cout << span.longestSpan() << std::endl;
		std::cout << span.shortestSpan() << std::endl;
		unsigned int	end_time = clock();
		std::cout << "time - " << (end_time - start_time) / 1000000.0 << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}

// int main()
// {
// 	Span sp = Span(5);
// 	sp.addNumber(5);
// 	sp.addNumber(3);
// 	sp.addNumber(17);
// 	sp.addNumber(9);
// 	sp.addNumber(11);
// 	std::cout << sp.shortestSpan() << std::endl;
// 	std::cout << sp.longestSpan() << std::endl;
// }