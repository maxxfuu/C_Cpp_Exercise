#ifndef CHECKING_ACCOUNT_H
#define CHECKING_ACCOUNT_H

#include "bankAccount.h"

class checkingAccount : public bankAccount {

    public: 

        checkingAccount() 
            : bankAccount() {}; 
        
        checkingAccount(const int& num, const std::string& name, const int& bal) 
            : bankAccount() {}; 

        void write_check(double ammount) override {} 

}; 

#endif