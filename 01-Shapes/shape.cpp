// In practice, virtual functions helps us to override function is sub class. 
// If class B is derivied from class A. If we create a function in class A and mark it as virtual 
// we have the  option  to override that function in the B class to do something else.  

#include "shape.h"
// base class 
Shapes::Shapes(int s, int p, std::string t)
    : sides(s), perimeter(p), type(t) {} 

// Display function definition 

//return type, Scope Operator, parameter list, {func body} 
void Shapes::display() { 
    std::cout << "Shape: " << type << std::endl;  
    std::cout << "Sides: " << sides << std::endl;  
    std::cout << "Perimeter: " << perimeter << std::endl;  
}

double Shapes::CalculateArea() { 
    double area = 0; 
    return area; 
}

Shapes::~Shapes() {}; 

