#ifndef MATH_ASSIGNMENT
#define MATH_ASSIGNMNET 
#include "assignment.h" 
class mathAssignment : public assignment {  
    private: 
        std::string chapterName; 
        int problemCount; 
        std::chrono::system_clock::time_point dueDate;

    public: 
        mathAssignment(); 
        mathAssignment(std::string name, int problem, std::chrono::system_clock::time_point dd);  

    std::string getDetail() const override { 
        return "Math " + chapterName + ", " + std::to_string(problemCount) + " Problems";   
    } 

    std::chrono::system_clock::time_point getDueDate() const override { 
        return "Due Date: ", dueDate; 
    }  
 
}; 
#endif