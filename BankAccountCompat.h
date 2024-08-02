//
// Created by clair on 7/31/2024.
//

#ifndef CS1C_FINAL_BANKACCOUNTCOMPAT_H
#define CS1C_FINAL_BANKACCOUNTCOMPAT_H

#include "financial.h"

// Credit to Domingos Begalli for this type erasure idiom

class Accounts {
public:
	template<typename T>
	// makes an AccountsAdapater object with the type of the object passed
	Accounts(T obj):inner_(new AccountsAdapater<T>(obj)) {}

	// actually calling functions of the AccountsBase object
	void createStatement() const {
		inner_->createStatement();
	}
	void withdraw(double amount) const {
		inner_->withdraw(amount);
	}

	~Accounts() {delete inner_;}
private:
	class AccountsBase {
	public:
		virtual void createStatement() = 0;
		virtual void withdraw(double amount) = 0;
	};



	template<typename T>
	class AccountsAdapater: public AccountsBase {
	public:
		// takes the object and sets it the obj variable
		AccountsAdapater(T obj) : obj_(obj) {}

		// calls the function of the obj_ object, overriding the AccountsBase pure virtual functions
		void createStatement() override {
			obj_.createStatement();
		}
		void withdraw(double amount) override {
			obj_.withdraw(amount);
		}

	private:
		T obj_;
	};



	AccountsBase* inner_;
};

#endif //CS1C_FINAL_BANKACCOUNTCOMPAT_H
