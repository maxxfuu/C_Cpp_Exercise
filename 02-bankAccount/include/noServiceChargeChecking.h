#ifndef NO_SERVICE_CHARGE_CHECKING 
#define NO_SERVICE_CHARGE_CHECKING 

#include "checkingAccount.h"

class noServiceChargeChecking : public checkingAccount { 

    private: // specific to this class  
        const int MAX_CHECKS = 100; // Example checks limit 
        double serviceCharge; 
        int checksWritten; 

    public: 
        noServiceChargeChecking() {} 

        noServiceChargeChecking(const int& num, const std::string& name, const int& bal) 
            : checkingAccount() {} 

        // Need to override all pure virtual functions 
        double make_deposits(double ammount) override {} 
        double make_withdraws(double ammount) override {} 
        double create_monthly_statements() override {} 
        double write_check(double ammount) override {} 


};  
 
#endif 