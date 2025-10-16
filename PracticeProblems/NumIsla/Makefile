# Basic Makefile

CC		= cc
CFLAGS	= -Wall -ansi -pedantic

TARGET	= num_isla

SRC		= num_isla.c

all: $(TARGET)

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) -o $(TARGET) $(SRC)

clean:
	rm -f $(TARGET)
