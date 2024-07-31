#include "bankAccount.h" 

bankAccount::bankAccount(const int& num, const std::string& name, const double& bal)
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

void bankAccount::make_deposits(double amount) { 
    balance += amount;   
} 

void bankAccount::make_withdraws(double amount) { 
    balance -= amount; 
} 
