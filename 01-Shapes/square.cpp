#include "square.h" 
#include <iostream> 

Square::Square(int sl) : Polygon(4, sl, sl), side_length(sl) {}

void Square::display() { 
    std::cout << "Square with side lengths of: " << side_length << std::endl; 
    Polygon::display(); 
} 

void Square::set_side(int new_side_length) {
    side_length = new_side_length;
    Polygon::set_values(4, side_length, side_length);
}

int Square::get_side() const { 
    return side_length; 
}


