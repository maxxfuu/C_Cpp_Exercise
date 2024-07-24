#ifndef CHECKING_ACCOUNT_H
#define CHECKING_ACCOUNT_H

#include "bankAccount.h"
#include <iostream> 
class checkingAccount : public bankAccount {

    public: 

        checkingAccount() 
            : bankAccount() {}; 
        
        checkingAccount(const int& num, const std::string& name, const int& bal) 
            : bankAccount() {}; 

        void make_deposits(double ammount) override {} 
        void make_withdraws(double ammount) override {} 
        void create_monthly_statements() override {}  
        void write_check(double ammount) override {}    
}; 

#endif