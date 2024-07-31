//
// Created by clair on 7/17/2024.
//

#ifndef HW_06_SERVICECHARGECHECKING_H
#define HW_06_SERVICECHARGECHECKING_H
#include "checkingAccount.h"

class serviceChargeChecking final : public checkingAccount{
private:
	int max_checks;
	int checkCount;
	double service_charge;

public:
	serviceChargeChecking();
	serviceChargeChecking(const std::string &newName, int newAccountNumber, double newBalance, int maxChecks,
						  double serviceCharge);
	~serviceChargeChecking() final;
	void writeCheck(double amount) override;
	void deduct_service_charge();
	void createStatement() override;
	int getMaxChecks() const;
	int getCheckCount() const;
	double getServiceCharge() const;

};


#endif //HW_06_SERVICECHARGECHECKING_H
