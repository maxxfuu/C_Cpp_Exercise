#include "checkingAccount.h" 

void checkingAccount::make_deposits(double amount) { 
    if (amount > 0) { 
        balance -= amount; 
    }
}

void checkingAccount::make_withdraws(double amount) { 
    if (amount > 0 && amount <= balance) { 
        balance -= amount; 
    }
} 

void checkingAccount::create_monthly_statements() { 
    std::cout << accountNumber << "\n"; 
    std::cout << holderName << "\n"; 
    std::cout << balance << "\n"; 

} 