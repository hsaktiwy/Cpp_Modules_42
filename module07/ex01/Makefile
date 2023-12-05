C = c++
flag = -Wall -Wextra -Werror -std=c++98
src = main.cpp
obj = $(src:.cpp=.o)
Name = a.out
all : $(Name)

$(Name) : $(obj)
	$(C) $(obj) -o $@
%.o : %.cpp iter.hpp 
		$(C) $(flag) -c $< -o $@
clean:
		rm -f $(obj)
fclean: clean
		rm -f $(Name)
re: fclean all

.PHONY: re fclean all clean