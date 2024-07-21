#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H 

#include <string> 

class bankAccount {
    // Cannot initialize an object of the base class beacuse it includes a pure virtual function. 
    // Logically this make sense beacuse in the real world an the term bank account does not have much relevance in the world. 
    // We need something that is more specific such as a checkings account or a savings account.  

    protected: // Don't want users from outside the scope to have access to member variables. 
        int accountNumber; 
        std::string holderName; 
        double balance; 

        bankAccount() : accountNumber(0), holderName(""), balance(0.0) {} 
        
        bankAccount(const int& num, const std::string& name, const int& bal) {} 
    
    public:
        std::string retrieve_account_name() const {}   
        int retrieve_account_number() const {} 
        double retrieve_account_balance() const {} 
        
    // Pure Virtual Function Without definition. Acting as a placeholder that is meant to be redefined by dervied classes. 
        virtual double make_deposits(double ammount) = 0; 
        virtual double make_withdraws(double ammount) = 0;
        virtual double create_monthly_statements() = 0; 

        virtual double write_check(double ammount) = 0;           // Up to the dervied classes to implement this function.   

        virtual ~bankAccount() = default; 
}; 

#endif 