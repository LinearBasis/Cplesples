#include "FragTrap.hpp"

int		main()
{
	FragTrap	dnicki;

	dnicki.attack("Data Chani");
	dnicki.takeDamage(10);
	dnicki.beRepaired(10);
	FragTrap dnicki2 = dnicki;
	FragTrap dnicki3;
	dnicki3 = dnicki;
	dnicki2.attack("Moshe Groot");
	dnicki3.highFivesGuys();
}

class a
{
public:
	a();
	~a();
	void f();
	int k;
};

class b
{
public:
	b();
	~b();
	void f();
	int k;
};

class c : public a, public b
{
public:
	c();
	~c();
};

int	main()
{
	c c_obj;
	c_obj.a::f();
}