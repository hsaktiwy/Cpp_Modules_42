C = c++
Flags = -std=c++98 -Wall -Wextra -Werror
SRC = AMateria.cpp Character.cpp Cure.cpp Ice.cpp MateriaSource.cpp main.cpp
OBJ = $(SRC:.cpp=.o)
NAME = interfaces

all: $(NAME)

$(NAME): $(OBJ)
	$(C) $(OBJ) -o $@
AMateria.o : AMateria.cpp AMateria.hpp Character.cpp
	$(C) $(Flags) -c $< -o $@
Character.o : Character.cpp Character.hpp ICharacter.hpp
	$(C) $(Flags) -c $< -o $@
Cure.o : Cure.cpp Cure.hpp AMateria.hpp
	$(C) $(Flags) -c $< -o $@
Ice.o : Ice.cpp Ice.hpp AMateria.hpp
	$(C) $(Flags) -c $< -o $@
MateriaSource.o : MateriaSource.cpp MateriaSource.hpp IMateriaSource.hpp
	$(C) $(Flags) -c $< -o $@
main.o : main.cpp Character.hpp MateriaSource.hpp Cure.hpp Ice.hpp
	$(C) $(Flags) -c $< -o $@
clean : 
	rm -rf $(OBJ)
fclean : clean
	rm -rf $(NAME)
re : fclean all

.PHONY: all clean fclean re