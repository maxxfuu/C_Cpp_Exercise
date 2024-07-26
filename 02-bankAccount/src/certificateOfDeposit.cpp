#include "certificateOfDeposit.h"

certificateOfDeposit::certificateOfDeposit() 
    : bankAccount(), CD_maturity_months(0), interest_rates(0.0), cd_months(0) {}

certificateOfDeposit::certificateOfDeposit(const int& num, const std::string& name, const int& bal, int maturityMonths, double interestRate, int cdmonths) 
    : bankAccount(num, name, bal), CD_maturity_months(maturityMonths), interest_rates(interestRate), cd_months(cdmonths) {}

void certificateOfDeposit::make_deposits(double amount) {
    throw std::runtime_error("Deposits are not allowed for Certificate of Deposit accounts before maturity.");
}

void certificateOfDeposit::make_withdraws(double amount) {
    if (cd_months < CD_maturity_months) {
        throw std::runtime_error("Early withdrawal is not allowed for Certificate of Deposit accounts.");
    }
    
    bankAccount::make_withdraws(amount);
}

void certificateOfDeposit::create_monthly_statements() {
    std::cout << "\nCertificate of Deposit - Monthly Statement\n";
    std::cout << "Account Number: " << bankAccount::retrieve_account_number() << "\n";
    std::cout << "Account Holder: " << bankAccount::retrieve_account_name() << "\n";
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Current Balance: $" << bankAccount::retrieve_account_balance() << "\n";
    std::cout << "Interest Rate: " << interest_rates * 100 << "%\n";
    std::cout << "Maturity Period: " << CD_maturity_months << " months\n";
    std::cout << "Months Elapsed: " << cd_months << " months\n";
    
    if (cd_months < CD_maturity_months) {
        std::cout << "Status: Not yet matured\n";
    } else {
        std::cout << "Status: Matured\n";
    }
    
    double interest_earned = calculate_interest();
    std::cout << "Interest Earned: $" << interest_earned << "\n";
    std::cout << "Total Value: $" << (bankAccount::retrieve_account_balance() + interest_earned) << "\n";
    
    std::cout << "\nTransaction History:\n";
    for (const auto& transaction : cd_transactions) {
        std::cout << transaction << "\n";
    }
}

void certificateOfDeposit::write_check(double amount) {
    throw std::runtime_error("Check writing is not available for Certificate of Deposit accounts.");
}

void certificateOfDeposit::update_months(int months) {
    cd_months += months;
    if (cd_months >= CD_maturity_months) {
        double interest_earned = calculate_interest();
        bankAccount::make_deposits(interest_earned);
        
        std::ostringstream stream;
        stream << std::fixed << std::setprecision(2);
        stream << "CD Matured - Interest Earned: $" << interest_earned << " | New Balance: $" << bankAccount::retrieve_account_balance();
        cd_transactions.push_back(stream.str());
    }
}

double certificateOfDeposit::calculate_interest() const {
    return calculate_interest(cd_months);
}

double certificateOfDeposit::calculate_interest(int months) const {
    int actual_months = std::min(months, CD_maturity_months);
    double rate = interest_rates / 12.0;  // Monthly rate
    return bankAccount::retrieve_account_balance() * std::pow(1 + rate, actual_months) - bankAccount::retrieve_account_balance();
}