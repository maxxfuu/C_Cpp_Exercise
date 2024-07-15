#ifndef SHAPE_H 
#define SHAPE_H 

#include <string>
#include <iostream>
// class Shape 
class Shapes { 
    // Scope of the class 
    public: 
        // data members or instance varibles 
        int sides; 
        int length; 
        int perimeter; 

        // Constructor_Name( Parameter List )
        Shapes(int s, int l, int p);  

        //Display Function
        void display(); 

        virtual double CalculateArea(); 

        //Destructor 
        ~Shapes(); 
};  

#endif 