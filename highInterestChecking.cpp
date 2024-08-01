//
// Created by clair on 7/17/2024.
// //

#include "highInterestChecking.h"

highInterestChecking::highInterestChecking(): name(""), accountNumber(0), balance(0){}

highInterestChecking::highInterestChecking(std::string new_name, int new_account_number, double new_balance, double new_minimum_balance):
		name(new_name), accountNumber(new_account_number), balance(new_balance), minimum_balance(new_minimum_balance){}

highInterestChecking::~highInterestChecking() {}


void highInterestChecking::deposit(double amount) {
	balance += amount;

}

void highInterestChecking::withdraw(double amount) {
	if (balance - amount >= minimum_balance)
		balance -= amount;
	else
		std::cout << "Cannot withdraw below minimum balance." << std::endl;

}

void highInterestChecking::createStatement() {
	std::cout << "High interest checking account statement." << std::endl;
}
