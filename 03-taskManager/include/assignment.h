#ifndef ASSIGNMENT
#define ASSIGNMENT 
 
#include <string> 

class assignmnet {  // creating an abstract class

    public: // Define data members or attributes of that all assingments have in common 
        std::string className;  
        std::string assingmnetName; 
        int dueDate; 

        assignmnet(); 

        // abstract class means there are pure virutal functions. 

}; 

#endif 