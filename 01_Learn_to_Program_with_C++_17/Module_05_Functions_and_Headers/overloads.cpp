#include <iostream>

#include "functions.h"

using std::cout;

int main()
{
    cout << add(1.4, 1.6) << '\n';
    cout << add(5, 6, 7.2) << '\n';
    cout << test(true) << '\n';
    cout << test(3.2) << '\n';

    // The following will not compile because int can be converted to both a double and a bool.
    // The compiler will complain that the call to 'test' is ambiguous.
    // cout << test(3) << '\n';
}
