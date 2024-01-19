#pragma once

#include "Transaction.h"
#include <string>
#include <vector>

class Account
{
  private:
    int balance;
    int overdraft;
    std::vector<Transaction> log;

  public:
    Account();
    std::vector<std::string> Report() const; // use const to make member functions read-only.
    bool Deposit(int amount);
    bool Withdraw(int amount);

    int Balance() const // use const to make member functions read-only.
    {
        return balance;
    }
};
