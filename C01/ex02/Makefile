NAME = main

SRC = main.cpp

OBJ = $(SRC:.cpp=.o)

CPPFLAG = -Werror -Wextra -Wall -std=c++98

CC = c++

INCLUDE = 

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CPPFLAG) $(OBJ) -o $@

%.o : %.cpp $(INCLUDE)
	$(CC) $(CPPFLAG) -c $< -o $@

clean :
	rm -rf *.o

fclean : clean
	rm -rf $(NAME)

re : fclean all