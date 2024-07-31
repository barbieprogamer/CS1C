//
// Created by clair on 7/17/2024.
//

#ifndef HW_06_CHECKINGACCOUNT_H
#define HW_06_CHECKINGACCOUNT_H
#include "bankAccount.h"


class checkingAccount: public bankAccount{
public:
	checkingAccount();
	checkingAccount(const std::string &newName, int newAccountNumber, double newBalance);
	~checkingAccount() override;
	virtual void writeCheck(double amount) = 0;

};


#endif //HW_06_CHECKINGACCOUNT_H
