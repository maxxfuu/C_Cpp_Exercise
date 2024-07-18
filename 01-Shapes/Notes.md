
General: 
add git ignore 

CXX not C: 
- C is for C++ CXX. gcc or g++


all: clean $(PROGRAM) 
- Dont have to clean everything since it will have to rebuild everything 
- Wasting Computation if you clean everything. 

Makefile: 
you would use ‘$@’ for the object file name and ‘$<’ for the source file name.


Wall, Wextra, Wpedantic 

Main: 
Using \n instead of std::endl; 
Has to do with performance. 

Header File:
Generally the Header guard is the same name as the file. 

Vtable: 

Learn Virtual Functions: 

Polygon Constructor: 
Make sure you name the parameters inside the constructor 

Construcotr: 

Polygon(int = 0) is the same as Polygon(int side = 0)

function prototype: 

Destructorn, noexcept: 
should not throw exceptions, by deafult Destructors do not through exceptiosn. 
When should we declare a destructor? 

Destructor: 

Fubnctiosn: 
nonmutating functions should always be function. 


clean: 
	rm -f *.o
	rm -f $(PROGRAM)


