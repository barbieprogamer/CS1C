//
// Created by clair on 7/23/2024.
//

#include "financial.h"


void test_bank_account() {
	std::cout << "================BANK ACCOUNT TEST================" << std::endl;
	bankAccount claire("Claire", 1, 10.01);
	claire.createStatement();
	claire.deposit(5.01);
	if (claire.retrieveBalance() != 15.02){
		std::cout << "deposit broken" << std::endl;
	}

	claire.withdraw(10);
	if (claire.retrieveBalance() != 5.02){
		std::cout << "withdraw broken" << std::endl;
	}



}

void test_service_charge_checking_account() {
	std::cout << "================SERVICE CHARGE CHECKING TEST================" << std::endl;
	serviceChargeChecking claire("Claire", 1, 10.01, 1, 0.5);
	claire.createStatement();
	claire.deposit(5.01);
	if (claire.retrieveBalance() != 15.02){
		std::cout << "deposit broken" << std::endl;
	}

	claire.withdraw(10);
	if (claire.retrieveBalance() != 5.02){
		std::cout << "withdraw broken" << std::endl;
	}

	claire.deduct_service_charge();
	if (claire.retrieveBalance() != 4.52)
		std::cout << "service charge broken" << std::endl;

	claire.writeCheck(1);

	std::cout << "Check should fail" << std::endl;
	claire.writeCheck(0.2);

}

void test_no_service_charge_checking_account() {
	std::cout << "================NO SERVICE CHARGE CHECKING TEST================" << std::endl;
	noServiceChargeChecking claire("Claire", 1, 10.01, 1, 1);
	claire.createStatement();
	claire.deposit(5.01);
	if (claire.retrieveBalance() != 15.02){
		std::cout << "deposit broken" << std::endl;
	}

	claire.withdraw(10);
	if (claire.retrieveBalance() != 5.02){
		std::cout << "withdraw broken" << std::endl;
	}

	std::cout << "Withdraw should fail:" << std::endl;
	claire.withdraw(5);

	claire.writeCheck(1);

	claire.pay_out_interest();
	if(claire.retrieveBalance() != 8.04)
		std::cout << "interest broken" << std::endl;


}

void test_savings_account(){
	std::cout << "================SAVINGS TEST================" << std::endl;
	savingsAccount claire("Claire", 1, 10.01, 1);
	claire.createStatement();
	claire.deposit(5.01);
	if (claire.retrieveBalance() != 15.02){
		std::cout << "deposit broken" << std::endl;
	}

	claire.withdraw(10);
	if (claire.retrieveBalance() != 5.02){
		std::cout << "withdraw broken" << std::endl;
	}

	claire.pay_out_interest();
	if (claire.retrieveBalance() != 10.04)
		std::cout << "interest broken" << std::endl;



}

void test_high_interest_savings_account(){
	std::cout << "================HIGH INTERST SAVINGS TEST================" << std::endl;
	highInterestSavings claire("Claire", 1, 10.01, 1, 1);
	claire.createStatement();
	claire.deposit(5.01);
	if (claire.retrieveBalance() != 15.02){
		std::cout << "deposit broken" << std::endl;
	}
//
	claire.withdraw(10);
	if (claire.retrieveBalance() != 5.02){
		std::cout << "withdraw broken" << std::endl;
	}

	std::cout << "withdraw should fail" << std::endl;
	claire.withdraw(5);

	claire.pay_out_interest();
	if (claire.retrieveBalance() != 10.04)
		std::cout << "interest broken" << std::endl;



}

void test_constructors_and_destructors(){
	std::string name = "Claire";
	int number = 100;
	double balance = 2.1;
	int max_checks = 3;
	double ir = 0.07;
	double min_balance = .01;
	double service_charge = 0.02;
	int mat_months = 10;

	bankAccount ba0;
	bankAccount ba1 (name, number, balance);

	serviceChargeChecking scc0;
	serviceChargeChecking scc1(name, number, balance, max_checks, service_charge);

	noServiceChargeChecking nscc0;
	noServiceChargeChecking nscc1(name, number, balance, min_balance, ir);

	highInterestChecking hic0;
	highInterestChecking hic1(name, number, balance, min_balance, ir);

	savingsAccount sa0;
	savingsAccount sa1(name, number, balance, ir);

	highInterestSavings his0;
	highInterestSavings his1(name, number, balance, ir, min_balance);

	certificateOfDeposit cd0;
	certificateOfDeposit cd1(name, number, balance, mat_months, ir);


}