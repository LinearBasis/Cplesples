#pragma once

#include <iostream>
#include <string>

class Converter
{
private:

public:
	Converter();
	Converter(const Converter& copy);
	~Converter();

	Converter&	operator=(const Converter& copy);

	float		toFloat(std::string str) const;
	double		toDouble(std::string str) const;
	char		toChar(std::string str) const;
	int			toInt(std::string str) const;
};