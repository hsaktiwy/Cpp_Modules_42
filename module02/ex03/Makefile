# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hsaktiwy <hsaktiwy@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/23 13:08:03 by hsaktiwy          #+#    #+#              #
#    Updated: 2023/08/17 10:27:35 by hsaktiwy         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CPP= c++ -std=c++98
FLAGS= -Wall -Wextra -Werror
SRC=main.cpp Fixed.cpp Point.cpp bsp.cpp
INC_F=Fixed.hpp
INC_P=Point.hpp
OBJ= $(SRC:.cpp=.o)
NAME=a.out
all:$(NAME)
$(NAME):$(OBJ)
	$(CPP) $(OBJ) -o $@
Fixed.o:Fixed.cpp $(INC_F)
	$(CPP) $(FLAGS) -c $< -o $@
Point.o:Point.cpp $(INC_F) $(INC_P)
	$(CPP) $(FLAGS) -c $< -o $@
bsp.o:bsp.cpp $(INC_P)
	$(CPP) $(FLAGS) -c $< -o $@
main.o: main.cpp $(INC_F) $(INC_P)
	$(CPP) $(FLAGS) -c $< -o $@
clean:
	rm -f $(OBJ)
fclean: clean
	rm -f $(NAME)
re: fclean all
.PHONY: re all clean fclean