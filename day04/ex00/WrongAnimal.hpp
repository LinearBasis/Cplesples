#pragma once
#include <iostream>
#include <string>

class WrongAnimal
{
private:

public:
	WrongAnimal();
	WrongAnimal(const WrongAnimal& copy);
	virtual	~WrongAnimal();
	
	WrongAnimal&	operator=(const WrongAnimal& copy);
	
	void			makeSound() const;
};

