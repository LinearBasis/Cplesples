#include "Bureaucrat.hpp"

int	main()
{
	try
	{
		Bureaucrat	clerk;
		clerk.decrementGrade();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}		
}