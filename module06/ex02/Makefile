C = c++
flag = -Wall -Wextra -Werror -std=c++98
src = main.cpp function.cpp Base.cpp
obj = $(src:.cpp=.o)
Name = a.out
all : $(Name)

$(Name) : $(obj)
	$(C) $(obj) -o $@
Base.o: Base.cpp Base.hpp
	$(C) $(flag) -c $< -o $@
%.o : %.cpp A.hpp B.hpp C.hpp Base.hpp
	$(C) $(flag) -c $< -o $@
clean:
	rm -f $(obj)
fclean: clean
	rm -f $(Name)
re: fclean all

.PHONY: re fclean all clean