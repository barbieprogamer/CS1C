//
// Created by clair on 7/17/2024.
//

#include "savingsAccount.h"



savingsAccount::savingsAccount(): name(""), accountNumber(0), balance(0){}

savingsAccount::savingsAccount(std::string new_name, int new_account_number, double new_balance):
		name(new_name), accountNumber(new_account_number), balance(new_balance){}

savingsAccount::~savingsAccount() {}


void savingsAccount::deposit(double amount) {
	balance += amount;

}

void savingsAccount::withdraw(double amount) {
	if (balance - amount >= 0)
		balance -= amount;
	else
		std::cout << "Not enough in account to withdraw." << std::endl;
}

void savingsAccount::createStatement() {
	std::cout << "Savings account statement." << std::endl;
}
