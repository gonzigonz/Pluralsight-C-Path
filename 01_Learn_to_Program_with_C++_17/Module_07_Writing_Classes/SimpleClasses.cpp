#include <iostream>
using std::cout;

#include "Account.h"

int main()
{
    cout << "Welcome to Simple Banking App\n";

    Account acc;

    cout << "Let's deposit $50...\n";
    if (!acc.Deposit(50))
    {
        cout << "Deposit failed!\n";
    }
    for (auto lineItem : acc.Report())
    {
        cout << lineItem << '\n';
    }

    cout << "Let's withdraw $50...\n";
    if (!acc.Withdraw(50))
    {
        cout << "Deposit failed!\n";
    }
    for (auto lineItem : acc.Report())
    {
        cout << lineItem << '\n';
    }
}
