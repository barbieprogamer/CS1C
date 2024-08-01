//
// Created by clair on 7/17/2024.
//

#ifndef HW_06_CHECKINGACCOUNT_H
#define HW_06_CHECKINGACCOUNT_H


#include <iostream>


class checkingAccount {
private:
	std::string name;
	int accountNumber;
	double balance;

public:
	checkingAccount();
	checkingAccount(std::string new_name, int new_account_number, double new_balance);
	~checkingAccount();
	void deposit(double amount);
	void withdraw(double amount);
	void createStatement();

};



#endif //HW_06_CHECKINGACCOUNT_H
