#pragma once

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Form
{
private:
	const std::string	_name;
	bool		_is_signed;
	const int			_grade_to_sign;
	const int			_grade_to_exec;

	Form&	operator=(const Form& copy);
	Form();
public:
	Form(int to_sign, int to_exec, std::string name);
	Form(const Form& copy);
	~Form();
	

	class GradeTooLowException
	{
		virtual const char* what() const throw();
	};
	class GradeTooHighException
	{
		virtual const char* what() const throw();
	};


	int					getGradeToSign() const;
	int					getGradeToExec() const;
	bool				getIsSigned() const;
	const std::string&	getName() const;

	void				beSigned();
};

std::ostream&	operator<<(std::ostream& out, const Form& form);

Form::Form(int to_sign, int to_exec, std::string name)
	: _grade_to_sign(to_sign), _grade_to_exec(to_exec), _name(name)
{
	if (to_sign > Bureaucrat::min_grade || to_exec > Bureaucrat::min_grade)
		throw Form::GradeTooLowException();
	if (to_sign < Bureaucrat::max_grade || to_exec > Bureaucrat::max_grade)
		throw Form::GradeTooHighException();
}

Form::Form()
	: _name("haha"), _grade_to_exec(150), _grade_to_sign(150)
{
	this->_is_signed = false;
}

Form::Form(const Form& copy)
	: _grade_to_sign(copy._grade_to_sign),
	_grade_to_exec(copy._grade_to_exec), _name(copy._name)
{
	this->_is_signed = copy._is_signed;
}

Form::~Form()
{

}

Form&	Form::operator=(const Form& copy)
{
	if (this == &copy)
		return (*this);
	return (*this);
}
