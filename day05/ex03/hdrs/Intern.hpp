#pragma once

#include <iostream>
#include <string>
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

class Intern
{
private:

public:
	Intern();
	Intern(const Intern& copy);
	~Intern();
	
	Intern&	operator=(const Intern& copy);

	Form*	makeForm(std::string name, std::string target);
};


