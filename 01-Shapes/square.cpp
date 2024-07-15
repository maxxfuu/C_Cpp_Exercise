#include "square.h" 
#include <iostream> 

Square::Square(int sl) : Polygon(4, sl, sl), side_length(sl) {}

void Square::display() { 
    std::cout << "Square with side lengths of: " << side_length << std::endl; 
    Polygon::display(); 
} 

Square::~Square() noexcept = default; 