#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main()
{
	try
	{
		Bureaucrat	clerk1(25);
		Bureaucrat	clerk2(30);

		Form		form1(30, 20, "doc1");
		Form		form2(25, 20, "doc2");
		std::cout << form2 << std::endl;
		clerk1.SignForm(form2);
		clerk2.SignForm(form1);
		clerk1.SignForm(form1);

		std::cout << form1 << std::endl;

	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
		return (0);
	}
	std::cout << "___________" << std::endl;
	try
	{
		Bureaucrat	put_in(1);

		Form		form2(25, 20, "asd");
		put_in.SignForm(form2);
		// clerk2.SignForm(form1);
		put_in.SignForm(form2);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
		// return (0);
	}
}