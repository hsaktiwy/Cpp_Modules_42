# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hsaktiwy <hsaktiwy@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/21 17:27:26 by hsaktiwy          #+#    #+#              #
#    Updated: 2023/07/21 17:32:18 by hsaktiwy         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CPP= c++ -std=c++98
FLAGS= -Wall -Wextra -Werror
SRC= main.cpp HumanA.cpp HumanB.cpp Weapon.cpp
OBJ= $(SRC:.cpp=.o)
NAME=attack
all:$(NAME)
$(NAME):$(OBJ)
	$(CPP) $(OBJ) -o $@
Human%.o:Human%.cpp Weapon.hpp Human%.hpp
	$(CPP) $(FLAGS) -c $< -o $@
main.o: main.cpp HumanA.hpp HumanB.hpp
	$(CPP) $(FLAGS) -c $< -o $@
Weapon.o: Weapon.cpp Weapon.hpp
	$(CPP) $(FLAGS) -c $< -o $@
clean:
	rm -f $(OBJ)
fclean: clean
	rm -f $(NAME)
re: fclean all
.PHONY: re all clean fclean