#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "contact.hpp"
class Phonebook
{
private:
	Contact	_book[8];
	int		_size;

public:
	void	addContact(Contact contact);
	void	addContact();
	void	printInfoForContact(int id);

	void	search();
	Phonebook();
	~Phonebook();
};



#endif