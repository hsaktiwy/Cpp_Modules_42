CC_F = c++ -Wall -Wextra -Werror -std=c++98
NAME = phonebook
SRC = main.cpp Contact.cpp PhoneBook.cpp
OBJ = $(SRC:.cpp=.o)
DEPS = PhoneBook.hpp Contact.hpp
all: $(NAME)

$(NAME) : $(OBJ)
	$(CC_F) $(OBJ) -o $@
#i did this cause when i does %.o:%.cpp $(DEPS) will compile all the file at both cases when the headerfiles were modified
main.o: main.cpp $(DEPS)
	$(CC) -c $< -o $@
Contact.o: Contact.cpp Contact.hpp
	$(CC) -c $< -o $@
PhoneBook.o: PhoneBook.cpp $(DEPS)
	$(CC) -c $< -o $@
clean : 
	rm -f $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all
.PHONY:clean fclean all re