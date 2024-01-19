#include "Transaction.h"

using std::string;
using std::to_string;

Transaction::Transaction(int amt, std::string kind) : amount(amt), type(kind)
{
}

string Transaction::Report() const // use const to make member functions read-only.
{
    string rtp;
    rtp += "  - ";
    rtp += type;
    rtp += " $";
    rtp += to_string(amount);
    return rtp;
}
