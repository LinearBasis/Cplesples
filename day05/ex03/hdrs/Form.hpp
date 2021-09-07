#pragma once

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Form
{
protected:
	Form&	operator=(const Form& copy);
	Form();
	
private:
	const std::string	_name;
	bool				_is_signed;
	const int			_grade_to_sign;
	const int			_grade_to_exec;


public:
	Form(int to_sign, int to_exec, std::string name);
	Form(const Form& copy);
	~Form();
	

	class GradeTooLowException : public std::exception
	{
		virtual const char* what() const throw();
	};
	class GradeTooHighException : public std::exception
	{
		virtual const char* what() const throw();
	};

	class FormIsSignedException : public std::exception
	{
		virtual const char* what() const throw();
	};

	class FormIsNotSignedException : public std::exception
	{
		virtual const char* what() const throw();
	};


	int					getGradeToSign() const;
	int					getGradeToExec() const;
	bool				getIsSigned() const;
	const std::string&	getName() const;

	void				beSigned(const Bureaucrat& chelik);

	void				execute(Bureaucrat const & executor) const;
	virtual void		action(std::string target) const = 0;
};

std::ostream&	operator<<(std::ostream& out, const Form& form);
