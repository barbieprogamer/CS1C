//
// Created by clair on 7/17/2024.
// //

#include "highInterestChecking.h"

highInterestChecking::highInterestChecking(): name(""), accountNumber(0), balance(0){}

highInterestChecking::highInterestChecking(std::string new_name, int new_account_number, double new_balance):
		name(new_name), accountNumber(new_account_number), balance(new_balance){}

highInterestChecking::~highInterestChecking() {}


void highInterestChecking::deposit(double amount) {
	balance += amount;

}

void highInterestChecking::withdraw(double amount) {
	if (balance - amount >= 0)
		balance -= amount;
	else
		std::cout << "Not enough in account to withdraw." << std::endl;
}

void highInterestChecking::createStatement() {
	std::cout << "High interest checking account statement." << std::endl;
}
