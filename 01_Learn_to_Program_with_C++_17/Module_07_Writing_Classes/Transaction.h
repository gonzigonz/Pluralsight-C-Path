#pragma once

#include <string>

class Transaction
{
  private:
    int amount;
    std::string type; // a better way exists

  public:
    Transaction(int amount, std::string kind);
    std::string Report() const; // use const to make member functions read-only.
};
