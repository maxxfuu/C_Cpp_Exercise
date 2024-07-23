#ifndef SERVICE_CHARGE_CHECKING 
#define SERVICE_CHARGE_CHECKING 

#include "checkingAccount.h"

class serviceChargeChecking : public checkingAccount { 

    private: // specific to this class  
        const int MAX_CHECKS = 100; // Example checks limit 
        double serviceCharge; 
        int checksWritten; 

    public: 
        serviceChargeChecking() {} 

        serviceChargeChecking(const int& num, const std::string& name, const int& bal) 
            : checkingAccount() {} 

        // Need to override all pure virtual functions 
        void make_deposits(double ammount) override {} 
        void make_withdraws(double ammount) override {} 
        void create_monthly_statements() override {} 
        void write_check(double ammount) override {} 

};  
 
#endif 