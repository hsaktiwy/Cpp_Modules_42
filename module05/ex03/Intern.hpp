#ifndef INTERN_HPP
#define INTERN_HPP
#include <iostream>
#include <cctype>
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern {
	public:
		Intern();
		~Intern();
		Intern(const Intern& copy);
		Intern&	operator=(const Intern& obj);
		AForm	*makeForm(std::string name, const std::string& target);
};
#endif