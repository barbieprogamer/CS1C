//
// Created by clair on 7/17/2024.
//

#include "noServiceChargeChecking.h"



noServiceChargeChecking::noServiceChargeChecking(): name(""), accountNumber(0), balance(0){}

noServiceChargeChecking::noServiceChargeChecking(std::string new_name, int new_account_number, double new_balance, double new_minimum_balance):
		name(new_name), accountNumber(new_account_number), balance(new_balance), minimum_balance(new_minimum_balance){}

noServiceChargeChecking::~noServiceChargeChecking() {}


void noServiceChargeChecking::deposit(double amount) {
	balance += amount;

}

void noServiceChargeChecking::withdraw(double amount) {
	if (balance - amount >= minimum_balance)
		balance -= amount;
	else
		std::cout << "Cannot withdraw below minimum balance." << std::endl;

}

void noServiceChargeChecking::createStatement() {
	std::cout << "No service charge checking account statement." << std::endl;
}
