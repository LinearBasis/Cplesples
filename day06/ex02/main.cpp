#include "classes.hpp"
#include <iostream>

Base	*generate(void)
{
	Base	*ans;
	std::srand(std::time(nullptr));

	int	random_number = std::rand();

	switch (random_number % 3)
	{
	case 0:
		ans = new A();
		break;
	case 1:
		ans = new B();
		break;
	case 2:
		ans = new C();
		break;
	}
	return (ans);
}

void identify(Base* p)
{
	if (dynamic_cast<A*>(p))
	{
		std::cout << "A" << std::endl;
	}
	if (dynamic_cast<B*>(p))
	{
		std::cout << "B" << std::endl;
	}
	if (dynamic_cast<C*>(p))
	{
		std::cout << "C" << std::endl;
	}
}

int		main()
{
	Base	*hmm;

	hmm = generate();
	identify(hmm);
}