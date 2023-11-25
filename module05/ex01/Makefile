# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hsaktiwy <hsaktiwy@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/25 16:11:02 by hsaktiwy          #+#    #+#              #
#    Updated: 2023/11/25 16:11:03 by hsaktiwy         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

C = c++
flag = -Wall -Wextra -Werror -std=c++98
src = Bureaucrat.cpp  main.cpp Form.cpp
obj = $(src:.cpp=.o)
Name = Buraucrat 
all : $(Name)

$(Name) : $(obj)
	$(C) $(obj) -o $@
%.o : %.cpp  Bureaucrat.hpp Form.hpp
	$(C) $(flag) -c $< -o $@
clean:
	rm -f $(obj)
fclean: clean
	rm -f $(Name)
re: fclean all