//
// Created by clair on 7/17/2024.
//

#ifndef HW_06_NOSERVICECHARGECHECKING_H
#define HW_06_NOSERVICECHARGECHECKING_H
#include "checkingAccount.h"

class noServiceChargeChecking: public checkingAccount{
protected:
	double minimum_balance;
	double interest_rate;

public:
	noServiceChargeChecking();
	noServiceChargeChecking(const std::string &newName, int newAccountNumber, double newBalance, double minimumBalance,
							double interestRate);
	~noServiceChargeChecking() override;
	void createStatement() override;
	void withdraw(double amount) override;
	void pay_out_interest();
	double getMinimumBalance() const;
	double getInterestRate() const;
	void writeCheck(double amount) override;


};


#endif //HW_06_NOSERVICECHARGECHECKING_H
