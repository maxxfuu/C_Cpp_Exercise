#ifndef ENGLISH_ASSIGNMENT
#define ENGLISH_ASSIGNMENT 

#include "assignment.h"

class englishAssignment : public assignment { 
    private: 
        std::string topicName; 
        int wordCount; 
        std::chrono::system_clock::time_point dueDate;
 
    public: 
        englishAssignment(); 
        englishAssignment(std::string topic, int word, std::chrono::system_clock::time_point dd); 

        std::string getDetail() const override {
            return "Essay: " + topicName + ", " + std::to_string(wordCount) + " words";
        }

        std::chrono::system_clock::time_point getDueDate() const override {
            return dueDate;
        }
}; 

#endif 
