//
// Created by clair on 7/17/2024.
//

#ifndef HW_06_SAVINGSACCOUNT_H
#define HW_06_SAVINGSACCOUNT_H
#include "bankAccount.h"

class savingsAccount: public bankAccount{
protected:
	double interest_rate;
public:
	savingsAccount();
	savingsAccount(const std::string &newName, int newAccountNumber, double newBalance, double interestRate);
	void pay_out_interest();
	void createStatement() override;
	~savingsAccount() override;


};


#endif //HW_06_SAVINGSACCOUNT_H
