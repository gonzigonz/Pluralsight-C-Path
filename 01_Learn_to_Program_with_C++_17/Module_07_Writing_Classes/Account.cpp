#include "Account.h"

using std::string;
using std::to_string;
using std::vector;

Account::Account() : balance(0), overdraft(20)
{
}

vector<string> Account::Report() const
{ // use const to make member functions read-only.
    vector<string> report;
    report.push_back("----------------------");
    report.push_back(" Balance is $" + to_string(balance));
    if (balance < 0)
    {
        report.push_back("  (In overdraft)");
    }
    report.push_back(" Transactions: ");
    for (auto t : log)
    {
        report.push_back(t.Report());
    }
    report.push_back("----------------------");
    return report;
}

bool Account::Deposit(int amount)
{
    if (amount > 0)
    {
        balance += amount;
        log.push_back(Transaction(amount, "Deposit"));
        // add service fee of $1
        balance -= 1;
        log.push_back(Transaction(1, "Fee"));
        return true;
    }
    return false;
}

bool Account::Withdraw(int amount)
{
    if (amount > 0 && amount < balance + overdraft)
    {
        balance -= amount;
        log.push_back(Transaction(amount, "Withdraw"));
        // add service fee of $1
        balance -= 1;
        log.push_back(Transaction(1, "Fee"));
        return true;
    }
    return false;
}
