#ifndef SQUARE_H 
#define SQUARE_H 

// include base class header file 
#include "shape.h" 

// class DerivedClass : public BaseClass 
class Square : public Shapes { 
    public: 
        Square(); 

        //Override the base class Calculate function 
        double CalculateArea() override; 

        ~Square(); 

};


#endif 