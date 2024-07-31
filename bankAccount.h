//
// Created by clair on 7/17/2024.
//

#ifndef HW_06_BANKACCOUNT_H
#define HW_06_BANKACCOUNT_H

#include <iostream>
#include <chrono>

class bankAccount {
protected:
	std::string name;
	int accountNumber;
	double balance;
	static std::chrono::year_month today_m_y;


public:
	bankAccount();
	bankAccount(std::string new_name, int new_account_number, double new_balance);
	virtual ~bankAccount();
	std::string retrieveName();
	int retrieveAccountNumber();
	double retrieveBalance();
	void deposit(double amount);
	virtual void withdraw(double amount);
	virtual void createStatement();




};


#endif //HW_06_BANKACCOUNT_H
