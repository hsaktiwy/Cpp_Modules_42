# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hsaktiwy <hsaktiwy@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/22 11:05:45 by hsaktiwy          #+#    #+#              #
#    Updated: 2023/07/22 11:15:40 by hsaktiwy         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CPP= c++ -std=c++98
FLAGS= -Wall -Wextra -Werror
SRC=fileshifting.cpp main.cpp 
INC=fileshifting.hpp
OBJ= $(SRC:.cpp=.o)
NAME=attack
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