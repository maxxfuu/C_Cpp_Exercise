CC = g++
CXXFLAGS = -std=c++11

PROGRAM = shape  
OBJS = shape.o main.o
HEADERS = shape.h

# Default make target
all: clean $(PROGRAM)

# Link the program
$(PROGRAM): $(OBJS)
	$(CC) $(OBJS) $(CXXFLAGS) -o $(PROGRAM)

# Compilation rules for each object file
shape.o: shape.cpp $(HEADERS)
	$(CC) $(CXXFLAGS) -c shape.cpp -o shape.o

main.o: main.cpp $(HEADERS)
	$(CC) $(CXXFLAGS) -c main.cpp -o main.o

clean: 
	rm -f *.o
	rm -f $(PROGRAM)
