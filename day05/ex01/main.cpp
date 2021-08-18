#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main()
{
	try
	{
		Bureaucrat	clerk1(25);
		Bureaucrat	clerk2(30);

		Form		form1(30, 20, "Document ob ubistvee Nemtsova");
		Form		form2(25, 20, "Document o posadke Navalnogo");
		clerk1.SignForm(form2);
		clerk2.SignForm(form1);
		clerk1.SignForm(form1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
		return (0);
	}
	try
	{
		Bureaucrat	put_in(1);

		Form		form2(25, 20, "Document o posadke Navalnogo");
		put_in.SignForm(form2);
		// clerk2.SignForm(form1);
		put_in.SignForm(form2);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
		// return (0);
	}
	std::cout << "A" << std::endl;
}