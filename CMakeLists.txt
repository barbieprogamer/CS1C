cmake_minimum_required(VERSION 3.22)
project(CS1C_final)

set(CMAKE_CXX_STANDARD 20)

add_executable(CS1C_final main.cpp
        bankAccount.cpp
        bankAccount.h
        checkingAccount.cpp
        checkingAccount.h
        serviceChargeChecking.cpp
        serviceChargeChecking.h
        noServiceChargeChecking.cpp
        noServiceChargeChecking.h
        certificateOfDeposit.cpp
        certificateOfDeposit.h
        savingsAccount.cpp
        savingsAccount.h
        highInterestSavings.cpp
        highInterestSavings.h
        highInterestChecking.cpp
        highInterestChecking.h
        financial.h
        tests.cpp
        tests.h
        BankAccountCompat.h)
