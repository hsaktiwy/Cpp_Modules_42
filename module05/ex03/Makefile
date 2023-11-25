C = c++
flag = -Wall -Wextra -Werror -std=c++98
src = Bureaucrat.cpp  main.cpp AForm.cpp PresidentialPardonForm.cpp  RobotomyRequestForm.cpp  ShrubberyCreationForm.cpp Intern.cpp
obj = $(src:.cpp=.o)
Name = Buraucrat 
all : $(Name)

$(Name) : $(obj)
	$(C) $(obj) -o $@
Bureaucrat.o : Bureaucrat.cpp  Bureaucrat.hpp AForm.hpp
	$(C) $(flag) -c $< -o $@
AForm.o : AForm.cpp  Bureaucrat.hpp AForm.hpp
	$(C) $(flag) -c $< -o $@
PresidentialPardonForm.o : PresidentialPardonForm.cpp PresidentialPardonForm.hpp  Bureaucrat.hpp AForm.hpp
	$(C) $(flag) -c $< -o $@
RobotomyRequestForm.o : RobotomyRequestForm.cpp RobotomyRequestForm.hpp  Bureaucrat.hpp AForm.hpp
	$(C) $(flag) -c $< -o $@
ShrubberyCreationForm.o : ShrubberyCreationForm.cpp ShrubberyCreationForm.hpp Bureaucrat.hpp AForm.hpp
	$(C) $(flag) -c $< -o $@
main.o : main.cpp  Intern.hpp AForm.hpp  Bureaucrat.hpp  PresidentialPardonForm.hpp  RobotomyRequestForm.hpp  ShrubberyCreationForm.hpp
	$(C) $(flag) -c $< -o $@
Intern.o : Intern.cpp   Intern.hpp AForm.hpp Bureaucrat.hpp PresidentialPardonForm.hpp  RobotomyRequestForm.hpp  ShrubberyCreationForm.hpp
	$(C) $(flag) -c $< -o $@
clean:
	rm -f $(obj)
fclean: clean
	rm -f $(Name)
re: fclean all