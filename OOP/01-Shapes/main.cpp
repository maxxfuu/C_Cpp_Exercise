#include "polygon.h"
#include "square.h"

int main() { 

    Polygon shape(4, 40, 4); 
    shape.display(); 

    Square square(5); 

    std::cout << "Initial Square: " << std::endl; 
    square.display(); 

    std::cout << "Invoke Setter Method of Square: " << std::endl; 
    square.set_side(7); 
    std::cout << "New Square: " << std::endl;
    square.display(); 

    return 0;

}
