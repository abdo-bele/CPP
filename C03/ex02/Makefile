NAME = FragTrap

SRC = main.cpp FragTrap.cpp ClapTrap.cpp
 
OBJ = $(SRC:%.cpp=%.o)

CPPFALGS =  -std=c++98 -Wall -Wextra -Werror

CC = c++

INCLUDE = FragTrap.hpp ClapTrap.hpp

all: $(NAME)

$(NAME): $(OBJ)
	$(CC)   $(CPPFALGS) $(OBJ) -o $@

%.o : %.cpp $(INCLUDE)
	$(CC)  $(CPPFALGS) -c $< -o $@

clean:
	@rm -rf $(OBJ) $(OBJB)

fclean: clean
	@rm -rf $(NAME) $(NAMEB)

re: fclean all
