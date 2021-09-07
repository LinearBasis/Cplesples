#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm()
{

}

ShrubberyCreationForm::ShrubberyCreationForm(std::string name)
	: Form(145, 137, name)
{
	
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& copy)
	: Form(copy)
{

}

ShrubberyCreationForm::~ShrubberyCreationForm()
{

}

ShrubberyCreationForm&
	ShrubberyCreationForm::operator=(const ShrubberyCreationForm& copy)
{
	if (this == &copy)
		return (*this);
	return (*this);
}


void	ShrubberyCreationForm::action(std::string target) const
{
	std::ofstream	fout;
	
	fout.open(target + "_shrubbery");

	if (!fout.is_open())
	{
		throw std::logic_error("File open error");
	}
	fout << "      /\\\n";
	fout << "     /\\*\\\n";
	fout << "    /\\O\\*\\\n";
	fout << "   /*/\\/\\/\\\n";
	fout << "  /\\O\\/\\*\\/\\\n";
	fout << " /\\*\\/\\*\\/\\/\\\n";
	fout << "/\\O\\/\\/*/\\/O/\\\n";
	fout << "      ||\n";
	fout << "      ||\n";
	fout << "      ||\n";
}


