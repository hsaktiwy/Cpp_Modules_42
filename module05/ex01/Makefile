C = c++
flag = -Wall -Wextra -Werror -std=c++98
src = Bureaucrat.cpp  main.cpp Form.cpp
obj = $(src:.cpp=.o)
Name = Buraucrat 
all : $(Name)

$(Name) : $(obj)
	$(C) $(obj) -o $@
%.o : %.cpp  Bureaucrat.hpp Form.hpp
	$(C) $(flag) -c $< -o $@
clean:
	rm -r $(obj)
fclean: clean
	rm -rf $(Name)
re: fclean all