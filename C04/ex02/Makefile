NAME = AAnimal

SRC = main.cpp AAnimal.cpp Cat.cpp Dog.cpp WrongAAnimal.cpp WrongCat.cpp Brain.cpp
 
OBJ = $(SRC:%.cpp=%.o)

CPPFALGS =  -std=c++98 -Wall -Wextra -Werror

CC = c++

INCLUDE = WrongAAnimal.hpp AAnimal.hpp  WrongCat.hpp Cat.hpp Dog.hpp Brain.hpp

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
