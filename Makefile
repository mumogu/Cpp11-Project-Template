#-------------------------------------
# Generic Makefile for C++11 Projects
#-------------------------------------

# Executable name
TARGET	= test

# Compiler
CC		= g++47

# Compiler Flags
CFLAGS	= -std=c++11 -O0 -Wall -pedantic 

# Linker Flags
LFLAGS	= 

#-------------------------------------
# Nothing to change below here
#-------------------------------------
SRC=$(wildcard src/*.cpp)
OBJS=$(SRC:.cpp=.o)

all: $(OBJS)
	$(CC) $(CFLAGS) $(LFLAGS) -o bin/$(TARGET) $^

%.o: %.cpp
	$(CC) $(CFLAGS) -c -o $@ $<

.PHONY: clean
clean:
	rm -f bin/$(TARGET) $(OBJS)