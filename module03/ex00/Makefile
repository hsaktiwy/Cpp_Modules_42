# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hsaktiwy <hsaktiwy@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/25 19:02:13 by hsaktiwy          #+#    #+#              #
#    Updated: 2023/07/25 19:03:57 by hsaktiwy         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CPP= c++ -std=c++98
FLAGS= -Wall -Wextra -Werror
SRC=main.cpp ClapTrap.cpp
INC=ClapTrap.hpp
OBJ= $(SRC:.cpp=.o)
NAME=clapTrap
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