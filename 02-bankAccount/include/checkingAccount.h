#ifndef CHECKING_ACCOUNT_H
#define CHECKING_ACCOUNT_H

#include "bankAccount.h"
#include <iostream> 
#include <iomanip>  
#include <sstream> 
#include <vector>  
#include <string>

class checkingAccount : public bankAccount { 
    protected: 
        std::vector<std::string> transactions; 
        
    public: 
        checkingAccount();  
        
        checkingAccount(const int& num, const std::string& name, const long double& bal); 

        void make_deposits(double ammount) override;  
        void make_withdraws(double ammount) override;  
        void create_monthly_statements() override;   
        void write_check(double ammount) override;     
}; 

#endif