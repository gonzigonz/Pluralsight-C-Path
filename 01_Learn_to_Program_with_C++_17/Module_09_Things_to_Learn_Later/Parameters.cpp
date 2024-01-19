#include <iostream>
using std::cout;

#include <memory>
using std::addressof;

#include <string>
using std::string;

class Check {
private:
    int amount;

public:
    Check(int amount);
    int Amount() const { return amount; }
};
Check::Check(int amt) : amount(amt) {}

class Account {
private:
    int balance;

public:
    Account();
    ~Account();
    void Deposit(int amount) { balance += amount; }
    int GetBalance() const { return balance; }
};
Account::Account() : balance(0) {}
Account::~Account() {
    cout << "I'm the destructor for the object at address " << this << '\n';
}

void depositByValue(Account acc, int amount) {
    acc.Deposit(amount);
}

void depositByRef(Account& acc, int amount) {
    acc.Deposit(amount);
}

int main() {
    cout << "Let's open a new account...\n";
    Account acc;
    cout << "New account object created at address " << addressof(acc) << '\n';
    cout << "Balance is now $" << acc.GetBalance() << '\n';

    cout << "\nLet's try to deposit a check of $50 by value...\n";
    Check check{50};
    depositByValue(acc, check.Amount());
    cout << "Balance is now $" << acc.GetBalance() << '\n';

    cout << "\nNow let's try to deposit that check by reference...\n";
    depositByRef(acc, check.Amount());
    cout << "Balance is now $" << acc.GetBalance() << '\n';

    return 0;
}
