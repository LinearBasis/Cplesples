#pragma once

#include <iostream>
#include <string>
#include <map>
#include <iterator>

class Span
{
private:
	size_t	_shortestSpan;
	size_t	_longestSpan;
	std::map<int, int>	_numbers;

	void	_recalculate(std::map<int, int>::iterator added_number);

public:
	Span();
	Span(const Span& copy);
	~Span();
	
	Span&	operator=(const Span& copy);

	void	addNumber(int n);
	template <class U>
		void	addNumber(U begin, U end);
	
	size_t	shortestSpan() const;
	size_t	longestSpan() const;
};

Span::Span()
{
	this->_longestSpan = 0;
	this->_shortestSpan = SIZE_T_MAX;
}

Span::Span(const Span& copy)
{
	this->_numbers = copy._numbers;
	this->_longestSpan = copy._longestSpan;
	this->_shortestSpan = copy._shortestSpan;
}

Span::~Span()
{

}

Span&	Span::operator=(const Span& copy)
{
	if (this == &copy)
		return (*this);
	this->_numbers = copy._numbers;
	this->_longestSpan = copy._longestSpan;
	this->_shortestSpan = copy._shortestSpan;
	return (*this);
}

void	Span::_recalculate(std::map<int, int>::iterator added_number)
{
	std::map<int, int>::iterator	prev;
	std::map<int, int>::iterator	next;
	std::map<int, int>::iterator	min;
	std::map<int, int>::iterator	max;

	size_t	shortest = this->_shortestSpan;

	if (this->_numbers.size() == 1)
		return ;
	
	if (added_number != this->_numbers.begin())
		prev = std::prev(added_number);

	next = std::next(added_number);
	

	min = this->_numbers.begin();
	max = std::prev(this->_numbers.end());
	if (added_number->second == 2)
	{
		shortest = 0;
	}
	if (added_number != this->_numbers.begin())
	{
		shortest = std::min(shortest,
						static_cast<size_t>(added_number->first - prev->first));
	}
	if (next != this->_numbers.end())
	{
		shortest = std::min(shortest,
						static_cast<size_t>(next->first - added_number->first));
	}
	this->_longestSpan = max->first - min->first;
	this->_shortestSpan = shortest;
}

void	Span::addNumber(int n)
{
	this->_numbers[n] = this->_numbers[n] + 1;
	// std::cout << n << " added to map" << std::endl;
	this->_recalculate(this->_numbers.find(n));
}

template <class U> void	Span::addNumber(U begin, U end)
{
	while (begin != end)
	{
		this->addNumber(*begin);
		begin++;
	}
}

size_t	Span::shortestSpan() const
{
	return (this->_shortestSpan);
}

size_t	Span::longestSpan() const
{
	return (this->_longestSpan);
}
