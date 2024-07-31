//
// Created by clair on 7/17/2024.
//

#include "bankAccount.h"
#include <iomanip>

bankAccount::bankAccount(): name(""), accountNumber(0), balance(0){}

bankAccount::bankAccount(std::string new_name, int new_account_number, double new_balance):
	name(new_name), accountNumber(new_account_number), balance(new_balance){}

bankAccount::~bankAccount() {}

std::string bankAccount::retrieveName() {
	return name;
}

int bankAccount::retrieveAccountNumber() {
	return accountNumber;
}

double bankAccount::retrieveBalance() {
	return balance;
}

void bankAccount::deposit(double amount) {
	balance += amount;

}

void bankAccount::withdraw(double amount) {
	if (balance - amount >= 0)
		balance -= amount;
	else
		std::cout << "Not enough in account to withdraw." << std::endl;
}

void bankAccount::createStatement() {
	std::cout << "Bank account statement." << std::endl;
}




