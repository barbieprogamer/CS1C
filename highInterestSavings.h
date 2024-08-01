//
// Created by clair on 7/17/2024.
//

#ifndef HW_06_HIGHINTERESTSAVINGS_H
#define HW_06_HIGHINTERESTSAVINGS_H


#include <iostream>


class highInterestSavings {
private:
	std::string name;
	int accountNumber;
	double balance;

public:
	highInterestSavings();
	highInterestSavings(std::string new_name, int new_account_number, double new_balance);
	~highInterestSavings();
	void deposit(double amount);
	void withdraw(double amount);
	void createStatement();

};


#endif //HW_06_HIGHINTERESTSAVINGS_H
