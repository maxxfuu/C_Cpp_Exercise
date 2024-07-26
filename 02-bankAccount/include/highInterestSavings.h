#include "savingsAccount.h" 
#include "bankAccount.h" 
#include <sstream> 

class highInterestSavings : public savingsAccount { 
    private: 
        const double minimumBalance = 100; 
    
    public: 
        highInterestSavings(); 

        highInterestSavings(const int& num, const std::string& name, const double& bal); 

        void make_deposits(double amount) override;  
        void make_withdraws(double amount) override; 
        void create_monthly_statements() override;  
        void write_check(double amount) override; 

}; 