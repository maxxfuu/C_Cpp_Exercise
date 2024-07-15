#ifndef SHAPE_H 
#define SHAPE_H 

#include <string>
#include <iostream>
// class Shape 
class Polygon { 
    
    // Using Protected so data members can be accessible to derived classes
    protected:
        int sides;  
        int width; // width of each side  
        int height; // height vector orthogonal to the base  
    
    public: 

        // Constructor_Name( Parameter List )
        Polygon(int = 0, int = 0, int = 0);  

        //Display Function
        virtual void display(); 

        // Setter Function 
        void set_values(int s, int w, int h);
        
        //Destructor 
        virtual ~Polygon() noexcept; 
};  

#endif 