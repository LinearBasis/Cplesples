#pragma once

#include <string>
#include <iostream>

class Animal
{
protected:
	std::string	_type;
public:
	Animal(std::string type = "No type");
	~Animal();

	virtual void		makeSound() const;
	virtual std::string	getType() const;
	virtual void		setType(std::string newType);
};
