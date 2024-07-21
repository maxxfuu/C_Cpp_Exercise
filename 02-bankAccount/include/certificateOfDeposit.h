#ifndef CERTIFICATE_OF_DEPOSIT
#define CERTIFICATE_OF_DEPOSIT 

#include "bankAccount.h"

class certificateOfDeposit : public bankAccount { 
    private: 
        int CD_maturity_months; 
        double interest_rates; 
        int cd_months; 

    public: 

        certificateOfDeposit() {} 

    

}; 

#endif CERTIFICATE_OF_DEPOSIT 
