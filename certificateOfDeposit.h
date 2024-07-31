//
// Created by clair on 7/17/2024.
//

#ifndef HW_06_CERTIFICATEOFDEPOSIT_H
#define HW_06_CERTIFICATEOFDEPOSIT_H
#include "bankAccount.h"

class certificateOfDeposit final: public bankAccount{
private:
	int cd_maturity_months;
	int cd_current_month;
	double interest_rate;

public:
	certificateOfDeposit();
	certificateOfDeposit(std::string new_name, int new_account_number, double new_balance, int new_mat, double new_ir);
	~certificateOfDeposit() final;
	void createStatement() override;
	void pay_out_interest();


};


#endif //HW_06_CERTIFICATEOFDEPOSIT_H
