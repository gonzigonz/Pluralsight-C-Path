#include "Transaction.h"

using std::string;
using std::to_string;

Transaction::Transaction(int amt, std::string kind) : amount(amt), type(kind) {
}

string Transaction::Report() {
    string rtp;
    rtp += "  - ";
    rtp += type;
    rtp += " $";
    rtp += to_string(amount);
    return rtp;
}
