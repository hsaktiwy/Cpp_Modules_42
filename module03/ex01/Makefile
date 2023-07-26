# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hsaktiwy <hsaktiwy@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/25 19:02:13 by hsaktiwy          #+#    #+#              #
#    Updated: 2023/07/26 12:52:23 by hsaktiwy         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CPP= c++ -std=c++98
FLAGS= -Wall -Wextra -Werror
SRC=main.cpp ClapTrap.cpp ScavTrap.cpp
INC=ClapTrap.hpp ScavTrap.hpp
OBJ= $(SRC:.cpp=.o)
NAME=clapTrap
all:$(NAME)

$(NAME):$(OBJ)
	$(CPP) $(OBJ) -o $@

ClapTrap.o:ClapTrap.cpp ClapTrap.hpp
	$(CPP) $(FLAGS) -c $< -o $@
ScavTrap.o:ScavTrap.cpp $(INC)
	$(CPP) $(FLAGS) -c $< -o $@
main.o:main.cpp ScavTrap.hpp
	$(CPP) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: re all clean fclean