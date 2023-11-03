#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP
#include "AForm.hpp"
#include <cmath>
class RobotomyRequestForm : public AForm{
	private:
		std::string	target;
		bool	robotomizing() const;
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(std::string Target);
		~RobotomyRequestForm();
		RobotomyRequestForm(const RobotomyRequestForm& copy);
		RobotomyRequestForm& operator=(const RobotomyRequestForm& obj);
		bool	execute(Bureaucrat const &executor) const;
};
#endif