#pragma once

#include <string>
#include <vector>
#include "Transaction.h"


class Account {
private:
    int balance;
    int overdraft;
    std::vector<Transaction> log;

public:
    Account();
    std::vector<std::string> Report() const; // use const to make member functions read-only.
    bool Deposit(int amount);
    bool Withdraw(int amount);

    int Balance() const { return balance; } // use const to make member functions read-only.
};
