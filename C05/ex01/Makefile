NAME = Bureaucrat

SRC = main.cpp Form.cpp  Bureaucrat.cpp 

INCLUDE = Form.hpp Bureaucrat.hpp 

OBJ = main.o Form.o Bureaucrat.o 

CPPFALGS =  -std=c++98 -Wall -Wextra -Werror

CC = c++

all: $(NAME)

$(NAME): $(OBJ) $(INCLUDE)
	$(CC)   $(CPPFALGS) $(OBJ) -o $@ 

%.o : %.cpp $(INCLUDE)
	$(CC)  $(CPPFALGS) -c $< -o $@ 

clean:
	@rm -rf $(OBJ)

fclean: clean
	@rm -rf $(NAME)

re: fclean all

.Phony: clean