# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hsaktiwy <hsaktiwy@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/21 16:14:38 by hsaktiwy          #+#    #+#              #
#    Updated: 2023/07/21 16:15:46 by hsaktiwy         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CPP= c++ -std=c++98
FLAGS= -Wall -Wextra -Werror
SRC= main.cpp
OBJ= $(SRC:.cpp=.o)
NAME=brain
all:$(NAME)
$(NAME):$(OBJ)
	$(CPP) $(OBJ) -o $@
%.o:%.cpp
	$(CPP) $(FLAGS) -c $< -o $@
clean:
	rm -f $(OBJ)
fclean: clean
	rm -f $(NAME)
re: fclean all
.PHONY: re all clean fclean