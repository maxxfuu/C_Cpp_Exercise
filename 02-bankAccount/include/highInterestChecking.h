#ifndef HIGH_INTEREST_CHECKING 
#define HIGH_INTEREST_CHECKING 

#include "noServiceChargeChecking.h" 

class highInterestChecking : public noServiceChargeChecking { 
    protected: 
        double highInterestRate; 
        double higherMinimumBalance; 
        
    public:
        highInterestChecking(const std::string& num, const std::string& name, double bal, double rate, double minBal) {}  

        void make_deposits(double ammount) override {} 
        void make_withdraws(double ammount) override {} 
        void create_monthly_statements() override {} 
        void write_check(double ammount) override {} 


}; 

#endif 