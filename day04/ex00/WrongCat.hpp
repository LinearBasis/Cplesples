#pragma once

#include <iostream>
#include <string>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
private:

public:
	WrongCat();
	WrongCat(const WrongCat& copy);
	~WrongCat();
	
	WrongCat&	operator=(const WrongCat& copy);

	void			makeSound() const;
};

