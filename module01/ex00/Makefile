# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hsaktiwy <hsaktiwy@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/21 14:23:07 by hsaktiwy          #+#    #+#              #
#    Updated: 2023/07/21 14:32:07 by hsaktiwy         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CPP= c++ -std=c++98
FLAGS= -Wall -Wextra -Werror
SRC= main.cpp Zombie.cpp newZombie.cpp randomChump.cpp
OBJ= $(SRC:.cpp=.o)
INC=Zombie.hpp
NAME=zombie
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