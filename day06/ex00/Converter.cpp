#include "Converter.hpp"

Converter::Converter()
{

}

Converter::Converter(const Converter& copy)
{
	(void)copy;
}

Converter::~Converter()
{

}

Converter&	Converter::operator=(const Converter& copy)
{
	if (this == &copy)
		return (*this);
	return (*this);
}


float		Converter::toFloat(std::string str) const
{
	try
	{
		return (std::stof(str));
	}
	catch(const std::exception& e)
	{
		throw std::invalid_argument("impossible");
	}
}

double		Converter::toDouble(std::string str) const
{
	try
	{
		return (std::stod(str));
	}
	catch(const std::exception& e)
	{
		throw std::invalid_argument("impossible");
	}
}

char		Converter::toChar(std::string str) const
{
	int	a;

	try
	{
		a = std::stoi(str);
	}
	catch(const std::exception& e)
	{
		throw std::invalid_argument("impossible");
	}

	if (!isprint(a))
		throw std::invalid_argument("Non displayable");
	return (a);
}

int			Converter::toInt(std::string str) const
{
	try
	{
		return ((std::stoi(str)));
	}
	catch(const std::exception& e)
	{
		throw std::invalid_argument("impossible");
	}
}