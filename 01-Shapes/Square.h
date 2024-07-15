#ifndef SQUARE_H 
#define SQUARE_H 

// include base class header file 
#include "polygon.h" 

// class DerivedClass : public BaseClass 
// Member fucntions are still accessable beacuse it is protected. 

class Square : public Polygon {
    private: 
        int side_length; 
    
    public: 
        //constructor with additional parameter 
        Square(int sl); 

        // Setter Method for side length 
        void set_side(int sl); 
        
        // Getter Method for side length 
        int get_side() const; 

        void display() override; 

    ~Square() noexcept override; 

}; 


#endif 