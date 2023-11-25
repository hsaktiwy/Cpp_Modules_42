# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hsaktiwy <hsaktiwy@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/25 15:26:29 by hsaktiwy          #+#    #+#              #
#    Updated: 2023/11/25 15:56:55 by hsaktiwy         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

C = c++
flag = -Wall -Wextra -Werror -std=c++98
src = Bureaucrat.cpp  main.cpp
obj = $(src:.cpp=.o)
Name = Buraucrat 
all : $(Name)

$(Name) : $(obj)
	$(C) $(obj) -o $@
%.o : %.cpp  Bureaucrat.hpp
	$(C) $(flag) -c $< -o $@
clean:
	rm -f $(obj)
fclean: clean
	rm -f $(Name)
re: fclean all