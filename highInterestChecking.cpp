//
// Created by clair on 7/17/2024.
// //

#include "highInterestChecking.h"

highInterestChecking::highInterestChecking(const std::string &newName, int newAccountNumber, double newBalance,
										   double minimumBalance, double interestRate) : noServiceChargeChecking(
		newName, newAccountNumber, newBalance, minimumBalance, interestRate) {}

highInterestChecking::highInterestChecking(): noServiceChargeChecking() {

}

highInterestChecking::~highInterestChecking() {

}

void highInterestChecking::createStatement() {
	std::cout << "High interest checking account statement." << std::endl;
}
