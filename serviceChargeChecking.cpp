//
// Created by clair on 7/17/2024.
//

#include "serviceChargeChecking.h"
#include <iomanip>



serviceChargeChecking::serviceChargeChecking(): name(""), accountNumber(0), balance(0){}

serviceChargeChecking::serviceChargeChecking(std::string new_name, int new_account_number, double new_balance):
		name(new_name), accountNumber(new_account_number), balance(new_balance){}

serviceChargeChecking::~serviceChargeChecking() {}


void serviceChargeChecking::deposit(double amount) {
	balance += amount;

}

void serviceChargeChecking::withdraw(double amount) {
	if (balance - amount >= 0)
		balance -= amount;
	else
		std::cout << "Not enough in account to withdraw." << std::endl;
}

void serviceChargeChecking::createStatement() {
	std::cout << "Service charge checking account statement." << std::endl;
}
