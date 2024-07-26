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
        certificateOfDeposit();  

        // Parameterized constructor
        certificateOfDeposit(const int& num, const std::string& name, const int& bal, int maturityMonths, double interestRate, int cdmonths); 
        
         
        void make_deposits(double amount) override;  
        void make_withdraws(double amount) override;  
        void create_monthly_statements() override;  
        void write_check(double amount) override; 

}; 

#endif 
