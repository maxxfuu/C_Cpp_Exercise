#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H 

#include <string> 

class bankAccount { 

    protected: // Don't want users from outside the scope to have access to member variables. 
        int accountNumber; 
        std::string holderName; 
        double balance; 

        bankAccount(const int& num, const std::string& name, const int& bal) {} 
    
    public:
        std::string retrieve_account_name() const {}   
        int retrieve_account_number() const {} 
        double retrieve_account_balance() const {} 

        double make_deposits() {} 
        double make_withdraws() {} 
        double create_monthly_statements() {} 

    // Pure Virtual Function Without definition. Acting as a placeholder that is meant to be redefined by dervied classes. 
        virtual double write_check() = 0;           // Up to the dervied classes to implement this function.   
}; 

#endif 