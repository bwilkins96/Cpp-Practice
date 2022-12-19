#include <iostream>

using namespace std;

int main() {
    int secretNum = 7;
    int guess;
    int limit = 3;

    while (guess != secretNum && limit > 0) {
        cout << "Enter guess: ";
        cin >> guess;
        limit--;
    }

    if (guess == secretNum) {
        cout << "You win!\n";
    } else {
        cout << "You lose :(\n";
    }

    return 0;
}