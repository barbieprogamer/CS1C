//
// Created by clair on 7/17/2024.
//

#include "checkingAccount.h"


checkingAccount::checkingAccount():bankAccount() {}

checkingAccount::checkingAccount(const std::string &newName, int newAccountNumber, double newBalance) : bankAccount(
		newName, newAccountNumber, newBalance) {}

checkingAccount::~checkingAccount() {

}



