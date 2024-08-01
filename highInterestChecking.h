//
// Created by clair on 7/17/2024.
//

#ifndef HW_06_HIGHINTERESTCHECKING_H
#define HW_06_HIGHINTERESTCHECKING_H



#include <iostream>


class highInterestChecking {
private:
	std::string name;
	int accountNumber;
	double balance;
	double minimum_balance;

public:
	highInterestChecking();
	highInterestChecking(std::string new_name, int new_account_number, double new_balance, double new_minimum_balance);
	~highInterestChecking();
	void deposit(double amount);
	void withdraw(double amount);
	void createStatement();

};


#endif //HW_06_HIGHINTERESTCHECKING_H
