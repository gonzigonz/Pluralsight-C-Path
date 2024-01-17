#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::cin;

int main() {
    cout << "What is your name? ";

    string name;
    cin >> name;

    string greeting;
    greeting = "Hello " + name;
    if (name == "Gonzalo") {
        greeting = "Hi Gonzalo, I know you!";
    }
    cout << greeting + '\n';

    int n = greeting.length();
    cout << "\"" + greeting + "\" is " << n << " characters long." << '\n';

    string suffix = greeting.substr(greeting.find(' ') + 1);
    if (suffix != name) {
        cout << "It's great hearing from you again! :)" << '\n';
    } else {
        cout << "Nice to meet you." << '\n';
    }
    return 0;
}
