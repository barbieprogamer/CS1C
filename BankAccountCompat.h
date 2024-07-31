//
// Created by clair on 7/31/2024.
//

#ifndef CS1C_FINAL_BANKACCOUNTCOMPAT_H
#define CS1C_FINAL_BANKACCOUNTCOMPAT_H

#include "financial.h"


class BankAccount{
public:
	virtual void withdraw() = 0;
	virtual void createStatement() = 0;


};



template <typename T>
class BankAccountWrapper: BankAccount{
private:
	const T& bank_account;

public:
	BankAccountWrapper(const T& account): bank_account(account){}
	void withdraw() override{
		bank_account.withdraw();
	}
	void createStatement() override{
		bank_account.createStatement();
	}


};


#endif //CS1C_FINAL_BANKACCOUNTCOMPAT_H
