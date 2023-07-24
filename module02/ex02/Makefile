# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hsaktiwy <hsaktiwy@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/23 13:08:03 by hsaktiwy          #+#    #+#              #
#    Updated: 2023/07/23 13:09:06 by hsaktiwy         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CPP= c++ -std=c++98
FLAGS= -Wall -Wextra -Werror
SRC=main.cpp Fixed.cpp
INC=Fixed.hpp
OBJ= $(SRC:.cpp=.o)
NAME=a.out
all:$(NAME)
$(NAME):$(OBJ)
	$(CPP) $(OBJ) -o $@
%.o:%.cpp $(INC)
	$(CPP) $(FLAGS) -c $< -o $@
clean:
	rm -f $(OBJ)
fclean: clean
	rm -f $(NAME)
re: fclean all
.PHONY: re all clean fclean