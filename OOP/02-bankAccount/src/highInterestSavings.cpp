#include "highInterestSavings.h" 
 
highInterestSavings::highInterestSavings() 
    : savingsAccount() {}  

highInterestSavings::highInterestSavings(const int& num, const std::string& name, const double& bal) 
    : savingsAccount(num, name, bal) {}


void highInterestSavings::make_deposits(double amount) { 
    if (amount <= 0) { 
        throw std::invalid_argument("Invalid Deposit Value"); 
    } else if (amount > 0) { 
        balance += amount; 

        std::ostringstream stream; 
        stream << std::fixed << std::setprecision(2); 

        stream << "Deposit: $" << amount << " | Balance $" << balance; 
        transactions.push_back(stream.str());  
    }  
} 

void highInterestSavings::make_withdraws(double amount) {
    if (amount <= 0) { 
        throw std::invalid_argument("Invalid Withdrawl Value"); 
    } else if (amount > balance) { 
        std::cout << "Insufficient Funds\n";
    } else if (amount > 0 && ((balance - amount) >= minimumBalance)) { 
        bankAccount::make_deposits(amount);

        std::ostringstream stream; 
        stream << std::fixed << std::setprecision(2); 

        stream << "Withdrawl: $" << amount << " | Balance $" << balance; 
        transactions.push_back(stream.str());  
    }
} 

void highInterestSavings::write_check(double amount) { 
    throw std::runtime_error("The function, write_check(), should not be invoked for the derived object."); 
}

void highInterestSavings::create_monthly_statements() {
    std::cout << "\nAccount Number: " << accountNumber << "\n"; 
    std::cout << "Account Holder: " << holderName << "\n"; 
    std::cout << "Initial Balance: $" << std::fixed << std::setprecision(2) << balance << "\n"; 
    std::cout << "______________________\n\n"; 
    std::cout << "View Transaction:\n"; 

    for (const auto& transaction : transactions) { 
        std::cout << transaction << "\n"; 
    }

    std::cout << "\nFinal Balance: $" << std::fixed << balance << "\n";
    std::cout << "Annual Percentage Yield ("<< (interestRate - 1) * 100 <<"%) : $" << std::fixed << interestRate*balance << "\n"; 

    if (minimumBalance > balance) {
        std::cout << "Monthly Maintenance Fee ("<< (interestRate - 1) * 100 <<"%) : $" << std::fixed << interestRate*balance << "\n"; 
    }
}  
 





