// In practice, virtual functions helps us to override function is sub class. 
// If class B is derivied from class A. If we create a function in class A and mark it as virtual 
// we have the  option  to override that function in the B class to do something else.  

#include "shape.h"
// base class 
Shapes::Shapes(int s, int p, int l)
    : sides(s), length(l), perimeter(p) {} 

// Display function definition 

//return type, Scope Operator, parameter list, {func body} 
void Shapes::display() { 
    std::cout << "Sides: " << sides << std::endl;  
    std::cout << "Length: " << length << std::endl; 
    std::cout << "Perimeter: " << perimeter << std::endl;  
}

double Shapes::CalculateArea() { 
    
    return 0; 
}



Shapes::~Shapes() {}; 

