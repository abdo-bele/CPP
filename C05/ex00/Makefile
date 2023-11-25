NAME = Bureaucrat

SRC = main.cpp Bureaucrat.cpp 

INCLUDE = Bureaucrat.hpp 

OBJ = $(SRC:%.cpp=%.o)

CXXFALGS =  -std=c++98 -Wall -Wextra -Werror

CC = c++

all: $(NAME)

$(NAME): $(OBJ) $(INCLUDE)
	$(CC)   $(CXXFALGS) $(OBJ) -o $@

%.o : %.cpp $(INCLUDE)
	$(CC)  $(CXXFALGS) -c $< -o $@

clean:
	@rm -rf $(OBJ)

fclean: clean
	@rm -rf $(NAME)

re: fclean all
