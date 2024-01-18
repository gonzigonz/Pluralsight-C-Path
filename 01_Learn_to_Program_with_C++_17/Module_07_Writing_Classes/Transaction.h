#pragma once

#include <string>

class Transaction {
private:
    int amount;
    std::string type; //a better way exists

public:
    Transaction(int amount, std::string kind);
    std::string Report();
};
