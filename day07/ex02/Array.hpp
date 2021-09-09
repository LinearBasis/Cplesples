#pragma once

#include <iostream>
#include <string>
#include <exception>
#include <stdexcept>

template <class T>
class Array
{
private:
	T*		_arr;
	size_t	_size;
public:
	Array(size_t size = 0);
	Array(const Array& copy);
	~Array();
	
	Array&		operator=(const Array& copy);
	T&			operator[](int index);
	const T&	operator[](int index) const;
};

template <class T>
Array<T>::Array(size_t size)
{
	if (size == 0)
		this->_arr = nullptr;
	else
		this->_arr = new T[size];
	this->_size = size;
}

template <class T>
Array<T>::Array(const Array& copy)
{
	this->_size = copy._size;
	this->_arr = new T[this->_size];
	for (size_t i = 0; i < this->_size; i++)
	{
		this->_arr[i] = copy[i];
	}
}

template <class T>
Array<T>::~Array()
{
	if (this->_arr)
		delete[] this->_arr;
}

template <class T>
Array<T>&	Array<T>::operator=(const Array& copy)
{
	if (this == &copy)
		return (*this);
	for (size_t i = 0; i < this->_size; i++)
	{
		this->_arr[i] = copy[i];
	}
	return (*this);
}

template <class T>
T&			Array<T>::operator[](int index)
{
	if (index < 0 || index >= (int)_size)
		throw std::invalid_argument("bad index");
	return (this->_arr[index]);
}

template <class T>
const T&	Array<T>::operator[](int index) const
{
	if (index < 0 || index >= (int)_size)
		throw std::invalid_argument("bad index");
	return (this->_arr[index]);
}