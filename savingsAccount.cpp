//
// Created by clair on 7/17/2024.
//

#include "savingsAccount.h"

void savingsAccount::pay_out_interest() {
	balance += (interest_rate * balance);


}

savingsAccount::savingsAccount(const std::string &newName, int newAccountNumber, double newBalance, double interestRate)
		: bankAccount(newName, newAccountNumber, newBalance), interest_rate(interestRate) {}

savingsAccount::savingsAccount(): interest_rate(0) {}

savingsAccount::~savingsAccount() {

}

void savingsAccount::createStatement() {
	std::cout << "Savings account statement." << std::endl;
}
