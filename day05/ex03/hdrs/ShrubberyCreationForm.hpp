#pragma once

#include <iostream>
#include <string>
#include "Form.hpp"


class ShrubberyCreationForm : public Form
{
private:
	ShrubberyCreationForm&	operator=(const ShrubberyCreationForm& copy);
	ShrubberyCreationForm();

public:
	ShrubberyCreationForm(std::string name);
	ShrubberyCreationForm(const ShrubberyCreationForm& copy);
	~ShrubberyCreationForm();
	
	void	action(std::string target) const;
};


