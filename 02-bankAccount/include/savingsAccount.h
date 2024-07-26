#ifndef SAVINGS_ACCOUNT 
#define SAVINGS_ACCOUNT 

#include "bankAccount.h" 
#include <iostream>
#include <iomanip> 
#include <string>
#include <vector> 
#include <sstream> 
 
class savingsAccount : public bankAccount {

    protected: 
        double interestRate; 
        std::vector<std::string> transactions;  

    public: 
        int transaction; 

        savingsAccount();   
        savingsAccount(const int& num, const std::string& name, const double& bal);  
        savingsAccount(const int& num, const std::string& name, const double& bal, const double& intRate);  
    
        void make_deposits(double amount) override;  
        void make_withdraws(double amount) override; 
        void create_monthly_statements() override;  
        void write_check(double amount) override; 


}; 

#endif 