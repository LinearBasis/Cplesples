#pragma once

#include <string>
#include <iostream>

class Animal
{
protected:
	std::string	_type;
	
public:
	Animal(std::string type = "No type");
	Animal(const Animal& copy);
	virtual	~Animal();

	Animal&	operator=(const Animal& copy);

	virtual void		makeSound() const = 0;
	virtual std::string	getType() const;
	virtual void		setType(std::string newType);
};
