#include "Intern.hpp"

Intern::Intern()
{

}

Intern::Intern(const Intern& copy)
{
	(void)copy;
}

Intern::~Intern()
{

}

Intern&	Intern::operator=(const Intern& copy)
{
	if (this == &copy)
		return (*this);
	return (*this);
}

Form*	Intern::makeForm(std::string name, std::string target)
{
	Form	*ans;

	if (name == "robotomy request")
	{
		ans = new RobotomyRequestForm(target);
	}
	else if (name == "shrubbery creation")
	{
		ans = new ShrubberyCreationForm(target);
	}
	else if (name == "presidential pardon")
	{
		ans = new PresidentialPardonForm(target);
	}
	else
	{
		throw std::invalid_argument("bad name of form");
	}
	std::cout << "Intern created " << target << std::endl;
	return (ans);
}