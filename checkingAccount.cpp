//
// Created by clair on 7/17/2024.
//

#include "checkingAccount.h"


checkingAccount::checkingAccount(): name(""), accountNumber(0), balance(0){}

checkingAccount::checkingAccount(std::string new_name, int new_account_number, double new_balance):
		name(new_name), accountNumber(new_account_number), balance(new_balance){}

checkingAccount::~checkingAccount() {}


void checkingAccount::deposit(double amount) {
	balance += amount;

}

void checkingAccount::withdraw(double amount) {
	if (balance - amount >= 0)
		balance -= amount;
	else
		std::cout << "Not enough in account to withdraw." << std::endl;
}

void checkingAccount::createStatement() {
	std::cout << "Checking account statement." << std::endl;
}




