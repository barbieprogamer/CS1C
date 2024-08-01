//
// Created by clair on 7/17/2024.
//

#ifndef HW_06_CERTIFICATEOFDEPOSIT_H
#define HW_06_CERTIFICATEOFDEPOSIT_H

#include <iostream>


class certificateOfDeposit {
private:
	std::string name;
	int accountNumber;
	double balance;

public:
	certificateOfDeposit();
	certificateOfDeposit(std::string new_name, int new_account_number, double new_balance);
	~certificateOfDeposit();
	void deposit(double amount);
	void withdraw(double amount);
	void createStatement();

};


#endif //HW_06_CERTIFICATEOFDEPOSIT_H
