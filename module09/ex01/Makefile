C = c++
flag = -Wall -Wextra -Werror -std=c++98
src = RPN.cpp  main.cpp
obj = $(src:.cpp=.o)
Name = RPN
all : $(Name)

$(Name) : $(obj)
	$(C) $(obj) -o $@
%.o : %.cpp RPN.hpp
		$(C) $(flag) -c $< -o $@
clean:
		rm -f $(obj)
fclean: clean
		rm -f $(Name)
re: fclean all

.PHONY: re fclean all clean