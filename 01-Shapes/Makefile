CC = g++
CXXFLAGS = -std=c++11

PROGRAM = poly
OBJS = polygon.o square.o main.o
HEADERS = polygon.h square.h

# Default make target
all: clean $(PROGRAM) 

# Link the program
$(PROGRAM): $(OBJS)
	$(CC) $(OBJS) $(CXXFLAGS) -o $(PROGRAM)

# Compilation rules for each object file
square.o: square.cpp $(HEADERS)
	$(CC) $(CXXFLAGS) -c square.cpp -o square.o

# Compilation rules for each object file
polygon.o: polygon.cpp $(HEADERS)
	$(CC) $(CXXFLAGS) -c polygon.cpp -o polygon.o

main.o: main.cpp $(HEADERS)
	$(CC) $(CXXFLAGS) -c main.cpp -o main.o

clean: 
	rm -f *.o
	rm -f $(PROGRAM)
