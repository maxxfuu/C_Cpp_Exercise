#include "savingsAccount.h" 

savingsAccount::savingsAccount() {
    : bankAccount(num, name, bal), interestRate(1.10); 
}
 
savingsAccount::savingsAccount(const int& num, const std::string& name, const double& bal, const double& intRate)  {
    : bankAccount(num, name, bal), interestRate(intRate);  
}

savingsAccount::make_deposits(double amount) {

} 
savingsAccount::make_withdraws(double amount) {

}
savingsAccount::create_monthly_statements() { 

}