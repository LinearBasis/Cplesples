#include "phonebook.hpp"
#include <iostream>
#include <string>

void	parse()
{
	std::string	command;
	Phonebook	asd;

	while (!std::cin.eof())
	{
		std::cout << "Enter command" << std::endl;
		getline(std::cin, command);
		if (command == "EXIT")
		{
			return ;
		}
		else if (command == "ADD")
		{
			asd.addContact();
		}
		else if (command == "SEARCH")
		{
			asd.search();
		}
		else
		{
			std::cout << "ERROR" << std::endl;
		}
	}
}

int		main()
{
	parse();
}