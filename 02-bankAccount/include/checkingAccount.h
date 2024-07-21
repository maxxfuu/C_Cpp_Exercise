#ifndef CHECKING_ACCOUNT_H
#define CHECKING_ACCOUNT_H

#include "bankAccount.h"

class checkingAccount : public bankAccount {

    public: 
        checkingAccount() {}; 
        double write_check() override {} 

        
}; 

#endif CHECKING_ACCOUNT_H 