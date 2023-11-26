#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP
#include "AForm.hpp"
#include <fstream>
class ShrubberyCreationForm: public AForm{
	private:
		std::string	target;
		void	CreateFileASCIITrees() const;
	public:
		ShrubberyCreationForm();
		~ShrubberyCreationForm();
		ShrubberyCreationForm(const std::string& Target);
		ShrubberyCreationForm(const ShrubberyCreationForm& copy);
		ShrubberyCreationForm&	operator=(const ShrubberyCreationForm& obj);
		void	execute(Bureaucrat const &executor) const;
};
#endif