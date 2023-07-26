# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hsaktiwy <hsaktiwy@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/25 19:02:13 by hsaktiwy          #+#    #+#              #
#    Updated: 2023/07/26 13:12:58 by hsaktiwy         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CPP= c++ -std=c++98
FLAGS= -Wall -Wextra -Werror
SRC=main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp
INC1=ClapTrap.hpp ScavTrap.hpp
INC2=ClapTrap.hpp FragTrap.hpp
OBJ= $(SRC:.cpp=.o)
NAME=clapTrap
all:$(NAME)

$(NAME):$(OBJ)
	$(CPP) $(OBJ) -o $@

ClapTrap.o:ClapTrap.cpp ClapTrap.hpp
	$(CPP) $(FLAGS) -c $< -o $@
ScavTrap.o:ScavTrap.cpp $(INC1)
	$(CPP) $(FLAGS) -c $< -o $@
FragTrap.o:FragTrap.cpp $(INC2)
	$(CPP) $(FLAGS) -c $< -o $@
main.o:main.cpp FragTrap.hpp
	$(CPP) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: re all clean fclean