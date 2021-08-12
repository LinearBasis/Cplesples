#include "contact.hpp"
#include <iostream>

Contact::Contact()
{

}

Contact::~Contact()
{

}

void	Contact::setFirstName(std::string firstName)
{
	this->_firstName = firstName;
}

void	Contact::setLastName(std::string lastName)
{
	this->_lastName = lastName;
}

void	Contact::setNickname(std::string nickname)
{
	this->_nickname = nickname;
}

void	Contact::setPhoneNumber(std::string phoneNumber)
{
	this->_phoneNumber = phoneNumber;
}

void	Contact::setDarkestSecret(std::string darkestSecret)
{
	this->_darkestSecret = darkestSecret;
}

std::string	Contact::getFirstName() const
{
	return (this->_firstName);
}
std::string	Contact::getLastName() const
{
	return (this->_lastName);
}
std::string	Contact::getNickname() const
{
	return (this->_nickname);
}
std::string	Contact::getPhoneNumber() const
{
	return (this->_phoneNumber);
}
std::string	Contact::getDarkestSecret() const
{
	return (this->_darkestSecret);
}

std::istream&	operator>>(std::istream &fin, Contact &contact)
{
	std::string	str;

	std::cout << "Enter first name" << std::endl;
	fin >> str;
	contact.setFirstName(str);

	std::cout << "Enter last name" << std::endl;
	fin >> str;
	contact.setLastName(str);

	std::cout << "Enter nickname" << std::endl;
	fin >> str;
	contact.setNickname(str);

	std::cout << "Enter phone number" << std::endl;
	fin >> str;
	contact.setPhoneNumber(str);

	std::cout << "Enter darkest secret" << std::endl;
	fin >> str;
	contact.setDarkestSecret(str);

	fin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	return (fin);
}



std::ostream&	operator<<(std::ostream &fout, const Contact &contact)
{
	fout << contact.getFirstName() << "\n";
	fout << contact.getLastName() << "\n";
	fout << contact.getNickname() << "\n";
	fout << contact.getPhoneNumber() << "\n";
	fout << contact.getDarkestSecret() << std::endl;
	return (fout);
}

