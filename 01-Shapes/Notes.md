
General: 
add git ignore 

CXX not C: 
- C is for C++ CXX. gcc or g++


all: clean $(PROGRAM) 
- Dont have to clean everything since it will have to rebuild everything 
- Wasting Computation if you clean everything. 

Makefile 
Look into CMake, Automatic Variabes, $@ $< $^
Wall, Wextra, Wpedantic 


clean: 
	rm -f *.o
	rm -f $(PROGRAM)


