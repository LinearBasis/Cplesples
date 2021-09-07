#pragma once

#include <iostream>
#include <string>

template <class T, std::size_t N>
class Array
{
private:
	T*		_arr;
public:
	Array();
	Array(const Array& copy);
	~Array();
	
	Array&		operator=(const Array& copy);
	T&			operator[](size_t index);
	const T&	operator[](size_t index) const;
};

template <class T, std::size_t N>
Array<T, N>::Array()
{
	this->_arr = new T[N];
}

template <class T, std::size_t N>
Array<T, N>::Array(const Array& copy)
{
	_arr = new T[N];
	for (size_t i = 0; i < N; i++)
	{
		this->_arr[i] = copy[i];
	}
}

template <class T, std::size_t N>
Array<T, N>::~Array()
{
	delete[] this->_arr;
}

template <class T, std::size_t N>
Array<T, N>&	Array<T, N>::operator=(const Array& copy)
{
	if (this == &copy)
		return (*this);
	for (size_t i = 0; i < N; i++)
	{
		this->_arr[i] = copy[i];
	}
	return (*this);
}

template <class T, std::size_t N>
T&			Array<T, N>::operator[](size_t index)
{
	return (this->_arr[index]);
}

template <class T, std::size_t N>
const T&	Array<T, N>::operator[](size_t index) const
{
	return (this->_arr[index]);
}