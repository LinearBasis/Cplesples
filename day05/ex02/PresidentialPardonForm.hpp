#pragma once

#include <iostream>
#include <string>
#include "Form.hpp"

class PresidentialPardonForm : public Form
{
private:
	PresidentialPardonForm();
	PresidentialPardonForm&	operator=(const PresidentialPardonForm& copy);

public:

	PresidentialPardonForm(std::string name);
	PresidentialPardonForm(const PresidentialPardonForm& copy);
	~PresidentialPardonForm();

	void	action(std::string target) const;
};

