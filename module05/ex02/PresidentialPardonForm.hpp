#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP
#include "AForm.hpp"
class PresidentialPardonForm :public AForm{
	private:
		std::string	target;
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(const std::string& Target);
		~PresidentialPardonForm();
		PresidentialPardonForm(const PresidentialPardonForm& copy);
		PresidentialPardonForm& operator=(const PresidentialPardonForm& obj);
		bool	execute(Bureaucrat const &executor) const;
};
#endif