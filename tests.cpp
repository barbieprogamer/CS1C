//
// Created by clair on 7/23/2024.
//

#include "financial.h"

void main_test(){
	Accounts arr[] = {Accounts(bankAccount()), Accounts(certificateOfDeposit()), Accounts(checkingAccount()), Accounts(highInterestChecking()),Accounts(highInterestSavings()),Accounts(noServiceChargeChecking()),Accounts(savingsAccount()),Accounts(serviceChargeChecking())};

	for(auto& x: arr)
		x.createStatement();

	for(auto& x: arr)
		x.withdraw(5);






}