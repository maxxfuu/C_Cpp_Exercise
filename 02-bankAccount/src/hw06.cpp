#include "../include/bankAccount.h"
#include "../include/certificateOfDeposit.h"
#include "../include/checkingAccount.h"
#include "../include/noServiceChargeChecking.h"
#include "../include/serviceChargeChecking.h" 
#include "../include/savingsAccount.h"
#include "../include/highInterestSavings.h"
#include <iostream> 

int main() { 

    // Checking Accounts 
    checkingAccount acc1(23123, "Max Fus", 312.21);
    acc1.make_deposits(22.23); 
    acc1.make_withdraws(78.27); 
    acc1.create_monthly_statements(); 

    serviceChargeChecking acc2(2131, "Bob Lee", 31204.23, 21.23, 123); 
    acc2.make_deposits(22.23); 
    acc2.make_withdraws(78.27); 
    acc2.create_monthly_statements(); 
 
    noServiceChargeChecking acc3(2842, "John Doe", 213.49); 
    acc3.make_deposits(22.23); 
    acc3.make_withdraws(78.27); 
    acc3.create_monthly_statements(); 

    //Saving Accounts
    savingsAccount acc4(8882, "June Ak", 924.23); 
    acc4.make_deposits(22.23); 
    acc4.make_withdraws(78.27);  
    acc4.create_monthly_statements(); 

    highInterestSavings acc5(5676, "Mike Hunt", 1000); 
    acc5.make_deposits(20.24); 
    acc5.make_withdraws(73.97);  
    acc5.create_monthly_statements();  

    certificateOfDeposit acc6(3513, "Hugh Jackson", 1000, 12, 2145.2, 9); 
    acc5.make_deposits(22.24); 
    acc5.make_withdraws(83.97);   
    acc6.create_monthly_statements(); 

    return 0; 
}
