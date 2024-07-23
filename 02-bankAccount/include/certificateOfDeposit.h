#ifndef CERTIFICATE_OF_DEPOSIT
#define CERTIFICATE_OF_DEPOSIT 

#include "bankAccount.h"

class certificateOfDeposit : public bankAccount { 
    private: 
        int CD_maturity_months; 
        double interest_rates; 
        int cd_months; 

    public: 
        // Default constructor
        certificateOfDeposit() 
            : bankAccount(), CD_maturity_months(0), interest_rates(0.0), cd_months(0) {}  

        // Parameterized constructor
        certificateOfDeposit(const int& num, const std::string& name, const int& bal, int maturityMonths, double interestRate, int cdmonths) 
            : bankAccount(num, name, bal), CD_maturity_months(maturityMonths), interest_rates(interestRate), cd_months(cdmonths) {}  

        void make_deposits(double ammount) override {} 
        void make_withdraws(double ammount) override {} 
        void create_monthly_statements() override {} 


}; 

#endif 
