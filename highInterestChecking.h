//
// Created by clair on 7/17/2024.
//

#ifndef HW_06_HIGHINTERESTCHECKING_H
#define HW_06_HIGHINTERESTCHECKING_H
#include "noServiceChargeChecking.h"

class highInterestChecking final: public noServiceChargeChecking{
public:
	highInterestChecking();
	highInterestChecking(const std::string &newName, int newAccountNumber, double newBalance, double minimumBalance,
						 double interestRate);
	~highInterestChecking() final;
	void createStatement() final;
};


#endif //HW_06_HIGHINTERESTCHECKING_H
