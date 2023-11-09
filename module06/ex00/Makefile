C = c++
flag = -Wall -Wextra -Werror -std=c++98
src = ScalarConvertion.cpp main.cpp
obj = $(src:.cpp=.o)
Name = a.out
all : $(Name)

$(Name) : $(obj)
	$(C) $(obj) -o $@
%.o : %.cpp ScalarConvertion.hpp 
		$(C) $(flag) -c $< -o $@
clean:
		rm -r $(obj)
fclean: clean
		rm -rf $(Name)
re: fclean all

.PHONY: re fclean all clean