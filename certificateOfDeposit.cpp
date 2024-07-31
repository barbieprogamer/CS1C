//
// Created by clair on 7/17/2024.
//

#include "certificateOfDeposit.h"
#include <iomanip>
certificateOfDeposit::certificateOfDeposit(): bankAccount(),cd_current_month(0), cd_maturity_months(0), interest_rate(0){}


certificateOfDeposit::certificateOfDeposit(std::string new_name, int new_account_number, double new_balance,
										   int new_mat, double new_ir): bankAccount(new_name, new_account_number, new_balance),
										   cd_maturity_months(new_mat), interest_rate(new_ir){}

certificateOfDeposit::~certificateOfDeposit() {}

void certificateOfDeposit::createStatement() {
	std::cout << "Certificate of deposit statement." << std::endl;

}

void certificateOfDeposit::pay_out_interest() {
	balance += (interest_rate * balance);

}
