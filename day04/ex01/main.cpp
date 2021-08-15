#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << "Cat's ptr type - "<< i->getType() << " " << std::endl;
	std::cout << "Dog's ptr type - "<< j->getType() << " " << std::endl;

	i->makeSound();
	j->makeSound();
	meta->makeSound();

	const WrongAnimal*	animal = new WrongAnimal();
	const WrongAnimal*	cat = new WrongCat();

	cat->makeSound();
	animal->makeSound();

	delete meta;
	delete i;
	delete j;
	delete animal;
	delete cat;
	return (0);
}