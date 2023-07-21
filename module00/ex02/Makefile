# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hsaktiwy <hsaktiwy@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/21 11:42:48 by hsaktiwy          #+#    #+#              #
#    Updated: 2023/07/21 11:49:34 by hsaktiwy         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CPP= c++ -std=c++98
FLAGS =  -Wall -Wextra -Werror
SRC= tests.cpp Account.cpp
INC = Account.hpp
OBJ = $(SRC:.cpp=.o)
NAME = account

all: $(NAME)

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