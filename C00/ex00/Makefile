CC := g++
CFLAGS := -std=c++11 -Wall

TARGET := megaphone

SOURCES := megaphone.cpp
OBJECTS = $(SOURCES:%.c=%.o)

$(TARGET): $(OBJECTS)
	$(CC) $^ -o $(TARGET)

%.o: %.cpp
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	@rm -rf $(BUILDDIR) $(TARGET)

.PHONY: clean
