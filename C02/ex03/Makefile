NAME = Point

SRC = main.cpp Point.cpp Fixed.cpp bsp.cpp
 
OBJ = $(SRC:%.cpp=%.o)

CPPFALGS =  -std=c++98 -Wall -Wextra -Werror

CC = c++

INCLUDE = Fixed.hpp Point.hpp

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
