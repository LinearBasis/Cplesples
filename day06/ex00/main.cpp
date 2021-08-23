#include "Converter.hpp"

int		main(int argc, char *argv[])
{
	if (argc != 2)
		return (0);
	Converter conv;

	try
	{
		std::cout << "char: " << conv.toChar(argv[1]) << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		std::cout << "int: " << conv.toInt(argv[1]) << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		std::cout << "float: " << conv.toFloat(argv[1]) << "f" << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		std::cout << "double: " << conv.toDouble(argv[1]) << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}