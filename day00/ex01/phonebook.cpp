#include "phonebook.hpp"
#include <iostream>

Phonebook::Phonebook()
{
	this->_size = 0;
}

Phonebook::~Phonebook()
{

}

void	Phonebook::addContact(Contact contact)
{
	this->_book[this->_size % 8] = contact;
	++this->_size;
}

void	Phonebook::addContact()
{
	Contact contact;

	std::cin >> contact;
	this->_book[this->_size % 8] = contact;
	++this->_size;
}

static std::string	getPhonebookDataForOutput(std::string str)
{
	if (str.size() > 10)
		return (str.substr(0, 9) + ".");
	return (str);
}

void	Phonebook::printInfoForContact(int id)
{
	if (id < this->_size)
	{
		Contact	contact = this->_book[id];


		std::cout << std::setw(10) << id << "|";
		std::cout << std::setw(10) << getPhonebookDataForOutput(contact.getFirstName()) << "|";
		std::cout << std::setw(10) << getPhonebookDataForOutput(contact.getLastName()) << "|";
		std::cout << std::setw(10) << getPhonebookDataForOutput(contact.getNickname()) << "|";
		std::cout << std::endl;
	}
	else
	{
		std::cout << "ERROR" << std::endl;
	}
}

void	Phonebook::search()
{
	int id;

	for (int i = 0; i < std::min(8, this->_size); i++)
	{
		printInfoForContact(i);
	}
	std::cout << "ENTER ID" << std::endl;
	if (!(std::cin >> id))
	{
		std::cout << "ERROR" << std::endl;
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		return ;
	}
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	if (id >= _size || id >= 8 || id < 0)
	{
		std::cout << "ERROR" << std::endl;
		return ;
	}
	std::cout << this->_book[id];
}
