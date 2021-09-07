#pragma once

#include <iostream>
#include <string>
#include "Form.hpp"

class RobotomyRequestForm : public Form
{
private:
	RobotomyRequestForm&	operator=(const RobotomyRequestForm& copy);
	RobotomyRequestForm();

public:
	RobotomyRequestForm(std::string name);
	RobotomyRequestForm(const RobotomyRequestForm& copy);
	~RobotomyRequestForm();

	void	action(std::string target) const;
};

