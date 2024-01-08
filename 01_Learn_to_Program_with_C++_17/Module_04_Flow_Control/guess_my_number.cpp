#include <iostream>

using std::cout;
using std::cin;

int main(){
    cout << "Welcome to Guess My Number\n\n";

    // initialize random seed
    srand ( time(NULL) );
    // generate secret number
    int number = rand() % 100 + 1;

    cout << "Enter a number between 0 and 100: ";
    int guess;
    while(guess != number){
        cin >> guess;
        if (guess == number) {
            cout << "Congratulations! " << guess << " is the correct number.\n";
        } else if (guess < number) {
            cout << "Higher:\n";
        } else {
            cout << "Lower:\n";
        }
    }
}
