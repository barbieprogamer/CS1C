//
// Created by clair on 7/17/2024.
//

#ifndef HW_06_NOSERVICECHARGECHECKING_H
#define HW_06_NOSERVICECHARGECHECKING_H
#include "checkingAccount.h"


class noServiceChargeChecking {
private:
	std::string name;
	int accountNumber;
	double balance;
	double minimum_balance;

public:
	noServiceChargeChecking();
	noServiceChargeChecking(std::string new_name, int new_account_number, double new_balance, double new_minimum_balance);
	~noServiceChargeChecking();
	void deposit(double amount);
	void withdraw(double amount);
	void createStatement();

};


#endif //HW_06_NOSERVICECHARGECHECKING_H
