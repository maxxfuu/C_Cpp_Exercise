#include "serviceChargeChecking.h" 

serviceChargeChecking::serviceChargeChecking() 
    : checkingAccount() {}  

serviceChargeChecking::serviceChargeChecking(const int& num, const std::string& name, const long double& bal, double charge, int checks) 
    : checkingAccount(num, name, bal), serviceCharge(charge), checksWritten(checks) {}      

void serviceChargeChecking::make_deposits(double amount) { 
    checkingAccount::make_deposits(amount); 
} 

void serviceChargeChecking::make_withdraws(double amount) {
   checkingAccount::make_withdraws(amount); 
} 
void serviceChargeChecking::create_monthly_statements() {
    checkingAccount::create_monthly_statements(); 
} 

// Unique to the class. 
void serviceChargeChecking::write_check(double amount) {
    if (amount <= 0) {
        throw std::invalid_argument("Check amount must be positive");
    }
    
    if (amount > balance) {
        throw std::runtime_error("Insufficient funds");
    }
    
    if (checksWritten >= MAX_CHECKS) {
        throw std::runtime_error("Maximum number of checks reached");
    }
    
    checkingAccount::make_withdraws(amount);
    checksWritten++;
} 