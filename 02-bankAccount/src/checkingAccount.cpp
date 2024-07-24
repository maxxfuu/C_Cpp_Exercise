#include "checkingAccount.h" 

checkingAccount::checkingAccount() 
            : bankAccount() {}; 
        
checkingAccount::checkingAccount(const int& num, const std::string& name, const long double& bal) 
            : bankAccount(num, name, bal) {}; 

void checkingAccount::make_deposits(double amount) { 
    if (amount > 0) { 
        balance -= amount; 

        std::ostringstream stream; 
        stream << std::fixed << std::setprecision(2); 

        stream << "Deposit: $" << amount << " | Balance $" << balance; 
        transactions.push_back(stream.str());  
    }
}

void checkingAccount::make_withdraws(double amount) { 
    if (amount > 0 && amount <= balance) { 
        balance -= amount; 
        
        std::ostringstream stream; 
        stream << std::fixed << std::setprecision(2); 

        stream << "withdrawl: $" << amount << " | Balance $" << balance; 
        transactions.push_back(stream.str());  
    }
} 

void checkingAccount::create_monthly_statements() { 
    std::cout << "Account Number: " << accountNumber << "\n"; 
    std::cout << "Account Holder: " << holderName << "\n"; 
    std::cout << "Initial Balance: $" << std::fixed << std::setprecision(2) << balance << "\n"; 
    std::cout << "______________________\n\n"; 
    std::cout << "View Transaction:\n"; 

    //Range based for-loops, using constant reference 
    // transaction is whats being printed out and transaction(s) is data member; 
    for (const auto& transaction : transactions) { 
        std::cout << transaction << "\n"; 
    }

    std::cout << "\nFinal Balance: $" << std::fixed << balance << "\n";

} 

void checkingAccount::write_check(double amount) { 
    make_withdraws(amount); 
}