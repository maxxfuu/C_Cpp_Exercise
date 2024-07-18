CXX = c++
CXXFLAGS = -std=c++11

PROGRAM = poly
OBJS = polygon.o square.o main.o
HEADERS = polygon.h square.h

# Default make target
all: clean $(PROGRAM) 

# Link the program
$(PROGRAM): $(OBJS)
	$(CC) $(OBJS) $(CXXFLAGS) -o $(PROGRAM)

poly: polygon.o square.o main.o
	$(CXX) $(CXXFLAGS) $^ -o $@

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean: 
	rm -f *.o
	rm -f $(PROGRAM)
