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
        int perimeter; 
        std::string type; 

        // Constructor_Name( Parameter List )
        Shapes(int s, int p, std::string t);  

        //Display Function
        void display(); 

        double CalculateArea(); 

        //Destructor 
        ~Shapes(); 
};  

#endif 