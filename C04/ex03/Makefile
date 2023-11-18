NAME = main

SRC = main.cpp Character.cpp Ice.cpp Cure.cpp MateriaSource.cpp AMateria.cpp

INCLUDE = ICharcter.hpp Character.hpp Ice.hpp Cure.hpp MateriaSource.hpp AMateria.hpp

OBJ = $(SRC:%.cpp=%.o)

CPPFALGS =  -std=c++98 -Wall -Wextra -Werror

CC = c++

all: $(NAME)

$(NAME): $(OBJ)
	$(CC)   $(CPPFALGS) $(OBJ) -o $@

%.o : %.cpp $(INCLUDE)
	$(CC)  $(CPPFALGS) -c $< -o $@

clean:
	@rm -rf $(OBJ)

fclean: clean
	@rm -rf $(NAME)

re: fclean all
