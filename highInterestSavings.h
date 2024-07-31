//
// Created by clair on 7/17/2024.
//

#ifndef HW_06_HIGHINTERESTSAVINGS_H
#define HW_06_HIGHINTERESTSAVINGS_H
#include "savingsAccount.h"

class highInterestSavings final: public savingsAccount{
private:
	double minimum_balance;

public:
	highInterestSavings();
	highInterestSavings(const std::string &newName, int newAccountNumber, double newBalance, double interestRate,
						double minimumBalance);
	~highInterestSavings() final;
	void withdraw(double amount) final;
	void createStatement() final;

};


#endif //HW_06_HIGHINTERESTSAVINGS_H
