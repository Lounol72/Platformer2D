# Compiler
CXX = g++

# Compiler flags
CXXFLAGS = -std=c++11

# Linker flags
LDFLAGS = -lsfml-graphics -lsfml-window -lsfml-system

# Target executable
TARGET = main

# Source files
SRCS = main.cpp

# Object files
OBJS = $(SRCS:.cpp=.o)

# Build target
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS) $(LDFLAGS)

# Clean target
clean:
	rm -f $(TARGET) $(OBJS)
