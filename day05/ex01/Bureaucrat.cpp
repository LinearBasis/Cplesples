#include "Bureaucrat.hpp"
#include "Form.hpp"

std::ostream&	operator<<(std::ostream& out, const Bureaucrat& bureaucrat)
{
	out << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getName();
	return (out);
}

Bureaucrat::Bureaucrat(std::string name)
	: _name(name), _grade(Bureaucrat::min_grade)
{

}

Bureaucrat::Bureaucrat(int grade, std::string name)
	: _name(name), _grade(grade)
{
	if (grade < Bureaucrat::max_grade)
	{
		throw Bureaucrat::GradeTooHighException();
	}
	if (grade > Bureaucrat::min_grade)
	{
		throw Bureaucrat::GradeTooLowException();
	}
}

Bureaucrat::Bureaucrat(const Bureaucrat& copy)
	: _name(copy._name), _grade(copy._grade)
{

}

Bureaucrat::~Bureaucrat()
{

}

Bureaucrat&	Bureaucrat::operator=(const Bureaucrat& copy)
{
	if (this == &copy)
		return (*this);
	this->_grade = copy._grade;
	// this->_name = copy._name;
	return (*this);
}

void				Bureaucrat::incrementGrade()
{
	this->_grade -= 1;
	if (this->_grade < Bureaucrat::max_grade)
		throw Bureaucrat::GradeTooHighException();
}

void				Bureaucrat::decrementGrade()
{
	this->_grade += 1;
	if (this->_grade > Bureaucrat::min_grade)
		throw Bureaucrat::GradeTooLowException();
}

const std::string&	Bureaucrat::getName() const
{
	return (this->_name);
}

int					Bureaucrat::getGrade() const
{
	return (this->_grade);
}

const char*	Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade is too high");
}

const char*	Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade is too low");
}

void				Bureaucrat::SignForm(Form& form) const
{
	try
	{
		form.beSigned(*this);
		std::cerr << this->_name << " signs "
			<< form.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << this->_name << " cannot sign "
			<< form.getName() << " because " << e.what() << std::endl;
	}
	
}
