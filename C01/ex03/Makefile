NAME = Unnecessary_violence

SRC = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp

OBJ = $(SRC:%.cpp=%.o)

CPPFLAG =  -std=c++98 -Wall -Wextra -Werror 

CC = C++

INCLUDE = HumanA.hpp HumanB.hpp Weapon.hpp

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