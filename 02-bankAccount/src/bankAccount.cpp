#include "bankAccount.h" 

bankAccount::bankAccount(const int& num, const std::string& name, const int& bal)
    : accountNumber(num), holderName(name), balance(bal) {} 
    
std::string bankAccount::retrieve_account_name() const {
    return holderName; 
} 

int bankAccount::retrieve_account_number() const { 
    return accountNumber; 
} 

double bankAccount::retrieve_account_balance() const { 
    return balance; 
} 

double bankAccount::make_deposits(double ammount) { 
    return (balance + ammount); 
} 

double bankAccount::make_withdraws(double ammount) { 
    return (balance - ammount); 
} 

