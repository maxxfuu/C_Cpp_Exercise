#ifndef NO_SERVICE_CHARGE_CHECKING 
#define NO_SERVICE_CHARGE_CHECKING 

#include "checkingAccount.h"

class noServiceChargeChecking : public checkingAccount { 

    protected: // specific to this class  
        const double interestRate = 1.05; 
        const double minimumBalance = 100; 

    public: 
        noServiceChargeChecking(); 

        noServiceChargeChecking(const int& num, const std::string& name, const long double& bal);  

        // Need to override all pure virtual functions 
        void make_deposits(double ammount) override; 
        void make_withdraws(double ammount) override; 
        void create_monthly_statements() override; 
        void write_check(double ammount) override; 


};  
 
#endif 