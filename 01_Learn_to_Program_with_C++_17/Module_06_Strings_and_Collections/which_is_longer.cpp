#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::string;

int main(){
    cout << "Welcome to Which Is Longer\n\n";
    bool done = false;
    while(!done){
        cout << "Enter the first phrase: ";
        string phrase1;
        // cin >> phrase1; Use getline to handle multiple words.
        getline(cin, phrase1);
        cout << "Enter the second phrase: ";
        string phrase2;
        // cin >> phrase2; Use getline to handle multiple words.
        getline(cin, phrase2);

        if (phrase1.length() == phrase2.length()) {
            cout << "Same length! The phrases '" << phrase1 << "' and '" << phrase2 << "' are the same length.\n";
        } else if (phrase1.length() < phrase2.length()) {
            cout << "The phrase '" << phrase2 << "' is longer!\n";
        } else {
            cout << "The phrase '" << phrase1 << "' is longer!\n";
        }

        cout << "Press 'q' to quit or any other key to continue: ";
        string option;
        getline(cin, option);
        done = option == "q";
    }
    return 0;
}
