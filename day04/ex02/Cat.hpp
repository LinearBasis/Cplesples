#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
private:
	Brain	*_brain;
public:
	Cat();
	Cat(const Cat& copy);
	~Cat();

	Cat&	operator=(const Cat& copy);

	void		setSomeIdeas(std::string str, int size);
	void		printSomeIdeas(int size) const;

	void		makeSound() const;
};
