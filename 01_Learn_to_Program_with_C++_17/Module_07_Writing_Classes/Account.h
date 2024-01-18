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
    std::vector<std::string> Report();
    bool Deposit(int amount);
    bool Withdraw(int amount);

    int Balance() { return balance; }
};
