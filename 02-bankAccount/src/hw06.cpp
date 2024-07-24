#include "../include/bankAccount.h"
#include "../include/certificateOfDeposit.h"
#include "../include/checkingAccount.h"
#include "../include/noServiceChargeChecking.h"
#include "../include/serviceChargeChecking.h"

#include <iostream> 

int main() { 
    std::cout << "working project\n"; 

    checkingAccount maxacc(23123, "Max Fu", 312.21);
    maxacc.make_deposits(22.23); 
    maxacc.make_withdraws(78.27); 
    maxacc.create_monthly_statements(); 

    return 0; 
}