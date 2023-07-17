CC_F = c++ -Wall -Wextra -Werror -std=c++98
NAME = megaphone
SRC = megaphone.cpp
OBJ = $(SRC:.cpp=.o)
all: $(NAME)

$(NAME) : $(OBJ)
	$(CC_F) $(OBJ) -o $@

%.o:%.cpp
	$(CC_F) -c $< -o $@

clean : 
	rm -f $(OBJ)

fclean : clean
	rm -rf $(NAME)

.PHONY:clean fclean all