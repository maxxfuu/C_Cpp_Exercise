#include "certificateOfDeposit.h" 

certificateOfDeposit::certificateOfDeposit() 
    : bankAccount(), CD_maturity_months(0), interest_rates(0.0), cd_months(0) {}  

certificateOfDeposit::certificateOfDeposit(const int& num, const std::string& name, const int& bal, int maturityMonths, double interestRate, int cdmonths) 
    : bankAccount(num, name, bal), CD_maturity_months(maturityMonths), interest_rates(interestRate), cd_months(cdmonths) {}  

void certificateOfDeposit::make_deposits(double amount) { 
    
} 
void certificateOfDeposit::make_withdraws(double amount) {} 
void certificateOfDeposit::create_monthly_statements() {} 
void certificateOfDeposit::write_check(double amount) {} 
