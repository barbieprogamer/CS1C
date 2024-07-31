//
// Created by clair on 7/17/2024.
////

#include "noServiceChargeChecking.h"
#include <iomanip>

void noServiceChargeChecking::withdraw(double amount) {
	if (balance - amount < minimum_balance)
		std::cout << "Cannot withdraw beyond minimum balance" << std::endl;
	else
		bankAccount::withdraw(amount);
}

double noServiceChargeChecking::getMinimumBalance() const {
	return minimum_balance;
}

double noServiceChargeChecking::getInterestRate() const {
	return interest_rate;
}

noServiceChargeChecking::noServiceChargeChecking(const std::string &newName, int newAccountNumber, double newBalance,
												 double minimumBalance, double interestRate) : checkingAccount(newName,
																											   newAccountNumber,
																											   newBalance),
																							   minimum_balance(
																									   minimumBalance),
																							   interest_rate(
																									   interestRate) {}


void noServiceChargeChecking::writeCheck(double amount) {
	if(balance - amount < 0){
		std::cout << "Cannot write check: insufficient funds" << std::endl;
	}
	else{
		std::cout << "Check written for $" << std::fixed << std::setprecision(2) << amount << std::endl;
		balance -= amount;

	}

}

void noServiceChargeChecking::pay_out_interest() {
	balance *= (1+interest_rate);



}

noServiceChargeChecking::noServiceChargeChecking(): checkingAccount(), minimum_balance(0), interest_rate(0) {}

noServiceChargeChecking::~noServiceChargeChecking() {

}

void noServiceChargeChecking::createStatement() {
	std::cout << "No service charge checking account statement." << std::endl;
}
