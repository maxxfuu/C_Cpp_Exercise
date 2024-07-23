#ifndef CERTIFICATE_OF_DEPOSIT
#define CERTIFICATE_OF_DEPOSIT 

#include "bankAccount.h"

class certificateOfDeposit : public bankAccount { 
    private: 
        int CD_maturity_months; 
        double interest_rates; 
        int cd_months; 

    public: 

        certificateOfDeposit() 
            : bankAccount() {};  

        certificateOfDeposit(const int& num, const std::string& name, const int& bal) 
            : bankAccount() {};  

        void make_deposits(double ammount) override {} 
        void make_withdraws(double ammount) override {} 
        void create_monthly_statements() override {} 


}; 

#endif CERTIFICATE_OF_DEPOSIT 
