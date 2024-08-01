//
// Created by clair on 7/17/2024.
//

#include "highInterestSavings.h"

highInterestSavings::highInterestSavings(): name(""), accountNumber(0), balance(0){}

highInterestSavings::highInterestSavings(std::string new_name, int new_account_number, double new_balance, double new_minimum_balance):
		name(new_name), accountNumber(new_account_number), balance(new_balance), minimum_balance(new_minimum_balance){}

highInterestSavings::~highInterestSavings() {}


void highInterestSavings::deposit(double amount) {
	balance += amount;

}

void highInterestSavings::withdraw(double amount) {
	if (balance - amount >= 0)
		balance -= amount;
	else
		std::cout << "Not enough in account to withdraw." << std::endl;
}

void highInterestSavings::createStatement() {
	std::cout << "High interest savings account statement." << std::endl;
}
