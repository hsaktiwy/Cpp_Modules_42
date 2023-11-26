#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137)
{
	target = "Default";
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& Target) : AForm("ShrubberyCreationForm", 145, 137), target(Target)
{

}

ShrubberyCreationForm::~ShrubberyCreationForm()
{

}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& copy): AForm(copy.getName(), copy.getRequireSignGrade(), copy.getRequireExecGrade()), target(copy.target)
{

}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& obj)
{
	if (this != &obj)
	{
		target = obj.target;
	}
	return (*this);
}

void	ShrubberyCreationForm::CreateFileASCIITrees() const
{
	std::string filename = this->target+"_shrubbery";
	std::ofstream file(filename.c_str());
	std::string tree = 
		"     0          8          *           ^\n"
        "    000        888        ***         ^^^\n"
        "   00000      88888      *****       ^^^^^\n"
        "  0000000    8888888    *******     ^^^^^^^\n"
        "     0          |          |           |\n";
	if (file.is_open())
	{
		for (int i = 0; i < 4; i++)
		{
			file << tree;
			if (i < 3)
				file << "\n\n\n\n";
		}
		file.close();
		std::cout << "The file " << filename << " is created." << std::endl;
	}
	else
		std::cout << "Fail to open the file ()!!" << filename << std::endl;
}

void	ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	if (this->getSigned() && this->getRequireExecGrade() >= executor.getGrade())
		CreateFileASCIITrees();
	else if (!this->getSigned())
		throw AForm::NotSignedException();
	else
		throw AForm::GradeTooLowException();
}
