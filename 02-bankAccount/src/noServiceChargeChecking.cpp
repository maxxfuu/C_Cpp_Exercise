#include "noServiceChargeChecking.h" 

noServiceChargeChecking::noServiceChargeChecking() 
    : checkingAccount() {} 

noServiceChargeChecking::noServiceChargeChecking(const int& num, const std::string& name, const long double& bal) 
    : checkingAccount(num, name, bal) {} 

void noServiceChargeChecking::make_deposits(double amount) { 
    checkingAccount::make_deposits(amount); 
} 

void noServiceChargeChecking::make_withdraws(double amount) {
    if (amount <= 0) { 
        throw std::invalid_argument("Invalid Withdrawl Value"); 
    } else if (amount > balance) { 
        std::cout << "Insufficient Funds\n";
    } else if (amount > 0 && ((balance - amount) >= minimumBalance)) { 
        balance -= amount; 

        std::ostringstream stream; 
        stream << std::fixed << std::setprecision(2); 

        stream << "Withdrawl: $" << amount << " | Balance $" << balance; 
        transactions.push_back(stream.str());  
    }
} 

void noServiceChargeChecking::write_check(double amount) { 
    make_withdraws(amount); 
}

void noServiceChargeChecking::create_monthly_statements() {
    checkingAccount::create_monthly_statements(); 
    std::cout << "Annual Percentage Yield ("<< (interestRate - 1) * 100 <<"%) : $" << std::fixed << interestRate*balance << "\n";
}  
 


