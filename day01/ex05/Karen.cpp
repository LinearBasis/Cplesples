#include "Karen.hpp"

Karen::Karen()
{

}

Karen::~Karen()
{

}

void	Karen::debug(void)
{
	std::cout << "I love to get extra bacon ";
	std::cout << "for my 7XL-double-cheese-t";
	std::cout << "riple-pickle-special-ketchup burger.";
	std::cout << "I just love it" << std::endl;
}

void	Karen::info(void)
{
	std::cout << "I cannot believe adding extra";
	std::cout << "bacon cost more money. You don’t put enough! ";
	std::cout << "If you did I would not have to ask for it!";
	std::cout << std::endl;
}

void	Karen::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon ";
	std::cout << "for free. I’ve been coming here for years ";
	std::cout << "and you just started working here last month.";
	std::cout << std::endl;
}

void	Karen::error(void)
{
	std::cout << "This is unacceptable, I want to speak to the manager now.";
	std::cout << std::endl;
}

static int	hash(std::string str)
{
	int	ans;

	ans = 1 * !str.compare("debug") + 2 * !str.compare("info") +
		3 * !str.compare("warning") + 4 * !str.compare("error");

	return (ans);
}

void	Karen::complain(std::string level)
{
	int	f = hash(level);

	switch (f)
	{
	case 1:
		this->debug();
		break ;
	case 2:
		this->info();
		break ;
	case 3:
		this->warning();
		break ;
	case 4:
		this->error();
		break ;
	default:
		break;
	}
}