NAME = ScavTrap

SRC = main.cpp ScavTrap.cpp ClapTrap.cpp
 
OBJ = $(SRC:%.cpp=%.o)

CPPFALGS =  -std=c++98 -Wall -Wextra -Werror

CC = c++

INCLUDE = ScavTrap.hpp ClapTrap.hpp

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
