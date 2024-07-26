#ifndef SAVINGS_ACCOUNT 
#define SAVINGS_ACCOUNT 

#include "bankAccount.h" 

class savingsAccount : public bankAccount {

    protected: 
        double interestRate; 

    public: 
        savingsAccount();   

        savingsAccount(const int& num, const std::string& name, const double& bal, const double& intRate);  
    
        void make_deposits(double amount) override;  
        void make_withdraws(double amount) override; 
        void create_monthly_statements() override;  



}; 

#endif 