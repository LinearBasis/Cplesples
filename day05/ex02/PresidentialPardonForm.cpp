#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form()
{

}

PresidentialPardonForm::PresidentialPardonForm(std::string name) : Form(25, 5, name)
{

}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& copy)
	: Form(copy)
{

}

PresidentialPardonForm::~PresidentialPardonForm()
{

}

PresidentialPardonForm&	PresidentialPardonForm::operator=(const PresidentialPardonForm& copy)
{
	if (this == &copy)
		return (*this);
	return (*this);
}

void	PresidentialPardonForm::action(std::string target) const
{
	std::cout << target << " has been pardoned by Zafod Beeblebrox." << std::endl;
}