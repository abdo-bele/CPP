CC := g++
CFLAGS = -std=c++11 -Wall

TARGET = megaphone

SOURCES = megaphone.cpp
OBJECTS = $(SOURCES:%.cpp=%.o)

all : $(NAME)

$(NAME): $(OBJECTS)
	$(CC) $^ -o $(TARGET)

%.o: %.cpp
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	@rm -rf $(BUILDDIR) $(TARGET)

.PHONY: clean
