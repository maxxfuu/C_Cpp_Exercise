// In practice, virtual functions helps us to override function is sub class. 
// If class B is derivied from class A. If we create a function in class A and mark it as virtual 
// we have the  option  to override that function in the B class to do something else.  

#include "polygon.h"

// base class 
Polygon::Polygon(int s, int w, int h)
    : sides(s), width(w), height(h) {} 

void Polygon::set_values(int s, int w, int h) { 
    sides = s; 
    width = w; 
    height = h; 
}

//return type, Scope Operator, parameter list, {func body} 
void Polygon::display() { 

    std::cout << "Sides: " << sides << std::endl; 
    std::cout << "Width: " << width << std::endl; 
    std::cout << "Height: " << height << std::endl; 

}

Polygon::~Polygon() {} 

