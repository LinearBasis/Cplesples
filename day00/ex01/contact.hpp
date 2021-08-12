#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <string>
#include <fstream>

class Contact
{
private:
	std::string	_firstName;
	std::string	_lastName;
	std::string	_nickname;
	std::string	_phoneNumber;
	std::string	_darkestSecret;
public:
	std::string	getFirstName() const;
	std::string	getLastName() const;
	std::string	getNickname() const;
	std::string	getPhoneNumber() const;
	std::string	getDarkestSecret() const;

	void	setFirstName(std::string firstName);
	void	setLastName(std::string lastName);
	void	setNickname(std::string nickname);
	void	setPhoneNumber(std::string phoneNumber);
	void	setDarkestSecret(std::string darkestSecret);

	Contact();
	~Contact();
};

std::istream&	operator>>(std::istream &fin, Contact &contact);
std::ostream&	operator<<(std::ostream &fout, const Contact &contact);

#endif