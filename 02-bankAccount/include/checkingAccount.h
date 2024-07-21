#ifndef CHECKING_ACCOUNT_H
#define CHECKING_ACCOUNT_H

#include "bankAccount.h"

class checkingAccount : public bankAccount {

    public: 

        checkingAccount() 
            : bankAccount() {}; 
        
        checkingAccount(const int& num, const std::string& name, const int& bal) 
            : bankAccount() {}; 

        double write_check(double ammount) override {} 
        

        // Need to override all pure virtual functions 
        double make_deposits(double ammount) override {} 
        double make_withdraws(double ammount) override {} 
        double create_monthly_statements() override {} 
        double write_check(double ammount) override {} 
}; 

#endif