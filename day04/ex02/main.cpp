#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << "Cat's ptr type - "<< i->getType() << " " << std::endl;
	std::cout << "Dog's ptr type - "<< j->getType() << " " << std::endl;


	delete j;

	Cat*	cat = new Cat();

	cat->printSomeIdeas(5);
	cat->setSomeIdeas("meow", 10);

	const Cat*	cat2 = new Cat(*cat);

	cat2->printSomeIdeas(5);


	delete i;
	delete cat;
	delete cat2;
}