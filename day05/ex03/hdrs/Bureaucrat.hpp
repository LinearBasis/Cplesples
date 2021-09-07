#pragma once

#include <iostream>
#include <string>

class Form;

class Bureaucrat
{
private:
	const std::string	_name;
	int					_grade;


	Bureaucrat&	operator=(const Bureaucrat& copy);


public:
	static const int	max_grade = 1;
	static const int	min_grade = 150;

	class GradeTooHighException : public std::exception
	{
	public:
		virtual const char* what() const throw();
	};

	class GradeTooLowException : public std::exception
	{
	public:
		virtual const char* what() const throw();
	};
	


	Bureaucrat(std::string name = "Dacia Nicki");
	Bureaucrat(int grade, std::string name = "Dacia Nicki");
	Bureaucrat(const Bureaucrat& copy);
	~Bureaucrat();

	void	incrementGrade();
	void	decrementGrade();
	const std::string&	getName() const;
	int					getGrade() const;

	void				SignForm(Form& form) const;
};

std::ostream&	operator<<(std::ostream& out,
							const Bureaucrat& bureaucrat);



