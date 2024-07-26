#ifndef CERTIFICATE_OF_DEPOSIT
#define CERTIFICATE_OF_DEPOSIT 

#include "bankAccount.h" 
#include <iostream>
#include <iomanip>
#include <sstream>
#include <stdexcept>
#include <cmath>
#include <vector>

class certificateOfDeposit : public bankAccount { 
    private: 
        int CD_maturity_months; 
        double interest_rates; 
        int cd_months;
        std::vector<std::string> cd_transactions;  // Separate transaction list for CD


    public: 
        // Default constructor
        certificateOfDeposit();  

        // Parameterized constructor
        certificateOfDeposit(const int& num, const std::string& name, const int& bal, int maturityMonths, double interestRate, int cdmonths); 
        
         
        void make_deposits(double amount) override;  
        void make_withdraws(double amount) override;  
        void create_monthly_statements() override;  
        void write_check(double amount) override; 

        void update_months(int months);
        double calculate_interest() const;
        double calculate_interest(int months) const;
        
}; 

#endif 
