C = c++
Flags = -std=c++98 -Wall -Wextra -Werror -fsanitize=leak -fno-omit-frame-pointer
SRC = Brain.cpp Animal.cpp Dog.cpp Cat.cpp main.cpp WrongAnimal.cpp WrongCat.cpp
OBJ = $(SRC:.cpp=.o)
INC = Animal.hpp
NAME = animals

all:$(NAME)

$(NAME) : $(OBJ)
	$(C) $(OBJ) -o $@
%.o:%.cpp %.hpp $(INC)
	$(C) $(Flags) -c $< -o $@
WrongAnimal.o: WrongAnimal.cpp WrongAnimal.hpp
	$(C) $(Flags) -c $< -o $@
WrongCat.o: WrongCat.cpp WrongCat.hpp WrongAnimal.hpp
	$(C) $(Flags) -c $< -o $@
%.o:%.cpp $(INC) Cat.hpp Dog.hpp
	$(C) $(Flags) -c $< -o $@
%.o:%.cpp %.hpp $(INC)
	$(C) $(Flags) -c $< -o $@
clean:
	rm -f $(OBJ)
fclean: clean
	rm -rf $(NAME)
re: fclean all

.PHONY: clean fclean all re