#include "bankAccount.h" 

bankAccount::bankAccount(const int& num, const std::string& name, const int& bal)
    : accountNumber(num), holderName(name), balance(bal) {} 
    
bankAccount::retrieve_account_name() const {
    return holderName; 
}