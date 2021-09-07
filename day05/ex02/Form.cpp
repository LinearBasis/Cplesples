#include "Form.hpp"

std::ostream&	operator<<(std::ostream& out, const Form& form)
{
	out << form.getName() << ":" << form.getGradeToSign() << ":"
		<< form.getGradeToExec() << " ";
	if (!form.getIsSigned())
		out << "not ";
	out << "signed";
	return (out);
}

Form::Form(int to_sign, int to_exec, std::string name)
	:  _name(name), _grade_to_sign(to_sign), _grade_to_exec(to_exec)
{
	if (to_sign > Bureaucrat::min_grade || to_exec > Bureaucrat::min_grade)
		throw Form::GradeTooLowException();
	if (to_sign < Bureaucrat::max_grade || to_exec < Bureaucrat::max_grade)
		throw Form::GradeTooHighException();
}

Form::Form()
	: _name("haha"), _grade_to_sign(150), _grade_to_exec(150)
{
	this->_is_signed = false;
}

Form::Form(const Form& copy)
	: _name(copy._name), _grade_to_sign(copy._grade_to_sign),
		_grade_to_exec(copy._grade_to_exec)
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

void			Form::beSigned(const Bureaucrat& chelik)
{
	if (chelik.getGrade() > this->_grade_to_sign)
	{
		throw Form::GradeTooLowException();
	}
	if (this->_is_signed)
	{
		throw Form::FormIsSignedException();
	}
	this->_is_signed = true;
}

const char*	Form::GradeTooHighException::what() const throw()
{
	return ("Grade is too high");
}

const char*	Form::GradeTooLowException::what() const throw()
{
	return ("Grade is too low");
}

const char*	Form::FormIsSignedException::what() const throw()
{
	return ("Form is signed");
}

int					Form::getGradeToSign() const
{
	return (this->_grade_to_sign);
}

int					Form::getGradeToExec() const
{
	return (this->_grade_to_exec);
}

bool				Form::getIsSigned() const
{
	return (this->_is_signed);
}

const std::string&	Form::getName() const
{
	return (this->_name);
}
const char*	Form::FormIsNotSignedException::what() const throw()
{
	return ("Form is not signed");
}


void				Form::execute(Bureaucrat const & executor) const
{
	if (!this->getIsSigned())
	{
		throw FormIsNotSignedException();
	}
	if (executor.getGrade() > this->getGradeToExec())
	{
		throw GradeTooLowException();
	}
	this->action(this->getName());
}