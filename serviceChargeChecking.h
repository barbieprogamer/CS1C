//
// Created by clair on 7/17/2024.
//

#ifndef HW_06_SERVICECHARGECHECKING_H
#define HW_06_SERVICECHARGECHECKING_H

#include <iostream>

class serviceChargeChecking {
private:
	std::string name;
	int accountNumber;
	double balance;

public:
	serviceChargeChecking();
	serviceChargeChecking(std::string new_name, int new_account_number, double new_balance);
	~serviceChargeChecking();
	void deposit(double amount);
	void withdraw(double amount);
	void createStatement();

};

#endif //HW_06_SERVICECHARGECHECKING_H
