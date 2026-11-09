# Makefile for SWE-350 Milestone 2 (ARM Target)

# Define the cross-compiler
CC = arm-linux-gnueabihf-gcc

# Define compiler flags
CFLAGS = -Wall -O2

# Define target executable name
TARGET = milestone2_arm

# Define source files
SRC = main.c

# Default build target
all: $(TARGET)

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(TARGET)

# Clean up build artifacts
clean:
	rm -f $(TARGET)