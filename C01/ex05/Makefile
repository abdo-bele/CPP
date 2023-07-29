NAME = Harl

SRC = main.cpp Harl.cpp

OBJ = $(SRC:%.cpp=%.o)

CPPFLAG =  -std=c++98 -Wall -Wextra -Werror 

CC = C++

INCLUDE = Harl.hpp

all : $(NAME)

$(NAME): $(OBJ)
	$(CC)   $(CPPFLAG) $(OBJ) -o $@

%.o : %.cpp $(INCLUDE)
	$(CC)  $(CPPFLAG) -c $< -o $@

clean :
	rm -rf *.o

fclean : clean
	rm -rf $(NAME)

re : fclean all