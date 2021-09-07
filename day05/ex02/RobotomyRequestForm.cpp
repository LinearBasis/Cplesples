#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form()
{

}

RobotomyRequestForm::RobotomyRequestForm(std::string name) : Form(72, 45, name)
{

}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& copy)
	: Form(copy)
{
	
}

RobotomyRequestForm::~RobotomyRequestForm()
{

}

RobotomyRequestForm&	RobotomyRequestForm::operator=(const RobotomyRequestForm& copy)
{
	if (this == &copy)
		return (*this);
	return (*this);
}

void	RobotomyRequestForm::action(std::string target) const
{
	std::cout << "BzzzzBzzzzBzzzzBzzzz. " << target << " has been robotomized ";
	std::cout << "successfully 50% of the time\n";
}