//
// Created by clair on 7/17/2024.
//

#include "highInterestSavings.h"

void highInterestSavings::withdraw(double amount) {
	if (balance - amount < minimum_balance)
		std::cout << "Cannot withdraw beyond minimum balance" << std::endl;
	else
		bankAccount::withdraw(amount);
}

highInterestSavings::highInterestSavings(const std::string &newName, int newAccountNumber, double newBalance,
										 double interestRate, double minimumBalance) : savingsAccount(newName,
																									  newAccountNumber,
																									  newBalance,
																									  interestRate),
																					   minimum_balance(
																							   minimumBalance) {}
highInterestSavings::highInterestSavings(): minimum_balance(0){}

highInterestSavings::~highInterestSavings(){}

void highInterestSavings::createStatement() {
	std::cout << "High interest savings account statement." << std::endl;
}
