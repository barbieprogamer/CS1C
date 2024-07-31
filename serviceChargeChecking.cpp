//
// Created by clair on 7/17/2024.
//

#include "serviceChargeChecking.h"
#include <iomanip>




void serviceChargeChecking::writeCheck(double amount) {
	if(balance - amount < 0){
		std::cout << "Cannot write check: insufficient funds" << std::endl;
	}
	else if(checkCount >= max_checks)
		std::cout << "Cannot write check: maximum check count reached" << std::endl;
	else{
		std::cout << "Check written for $" << std::fixed << std::setprecision(2) << amount << std::endl;
		balance -= amount;
		checkCount++;

	}

}


void serviceChargeChecking::deduct_service_charge() {
	balance -= service_charge;


}

serviceChargeChecking::~serviceChargeChecking() = default;

serviceChargeChecking::serviceChargeChecking(const std::string &newName, int newAccountNumber, double newBalance,
											 int maxChecks, double serviceCharge) : checkingAccount(
		newName, newAccountNumber, newBalance), max_checks(maxChecks), checkCount(0), service_charge(
		serviceCharge) {}

serviceChargeChecking::serviceChargeChecking() : checkingAccount(), max_checks(0), checkCount(0), service_charge(0) {}

int serviceChargeChecking::getMaxChecks() const {
	return max_checks;
}

int serviceChargeChecking::getCheckCount() const {
	return checkCount;
}

double serviceChargeChecking::getServiceCharge() const {
	return service_charge;
}

void serviceChargeChecking::createStatement() {
	std::cout << "Service charge checking account statement." << std::endl;
}
