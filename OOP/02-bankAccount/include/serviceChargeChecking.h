#ifndef SERVICE_CHARGE_CHECKING 
#define SERVICE_CHARGE_CHECKING 

#include "checkingAccount.h"

class serviceChargeChecking : public checkingAccount { 

    private: // specific to this class  
        const int MAX_CHECKS = 100; // Example checks limit 
        double serviceCharge; 
        int checksWritten; 

    public: 
        serviceChargeChecking();  

        serviceChargeChecking(const int& num, const std::string& name, const long double& bal, double charge, int checks); 

        // Need to override all pure virtual functions 
        void make_deposits(double amount) override; 
        void make_withdraws(double amount) override; 
        void create_monthly_statements() override; 
        void write_check(double amount) override; 

};  
 
#endif 