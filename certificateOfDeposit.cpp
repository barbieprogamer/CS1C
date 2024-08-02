//
// Created by clair on 7/17/2024.
//

#include "certificateOfDeposit.h"



certificateOfDeposit::certificateOfDeposit(): name(""), accountNumber(0), balance(0){}

certificateOfDeposit::certificateOfDeposit(std::string new_name, int new_account_number, double new_balance):
		name(new_name), accountNumber(new_account_number), balance(new_balance){}

certificateOfDeposit::~certificateOfDeposit() {}


void certificateOfDeposit::deposit(double amount) {
	balance += amount;

}

void certificateOfDeposit::withdraw(double amount) {
	if (balance - amount >= 0)
		balance -= amount;
	else
		std::cout << "Not enough in account to withdraw." << std::endl;
}

void certificateOfDeposit::createStatement() const{
	std::cout << "Certificate of deposit statement." << std::endl;
}
