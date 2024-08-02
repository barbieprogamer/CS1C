//
// Created by clair on 7/17/2024.
//

#ifndef HW_06_BANKACCOUNT_H
#define HW_06_BANKACCOUNT_H

#include <iostream>

class bankAccount {
private:
	std::string name;
	int accountNumber;
	double balance;

public:
	bankAccount();
	bankAccount(std::string new_name, int new_account_number, double new_balance);
	~bankAccount();
	void deposit(double amount);
	void withdraw(double amount);
	void createStatement() const;

};


#endif //HW_06_BANKACCOUNT_H
