#ifndef ASSIGNMENT
#define ASSIGNMENT 
 
#include <string> 
#include <chrono> 

class assignment {  // design base abstract class
    public: // Define data members or attributes of that all assingments have in common 
        std::string className;  
        std::string assignmentName;  
        int dueDate; 

        assignment(); 

        // abstract class means there are pure virutal functions. 
        virtual std::string getDetail() const = 0; 
        virtual std::chrono::system_clock::time_point getDueDate() const = 0;

        virtual ~assignment() = default; 
}; 

#endif 