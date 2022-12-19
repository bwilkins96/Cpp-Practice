#include <iostream>

using namespace std;

int main() {
    string color, noun, name;

    cout << "Enter a color: ";
    getline(cin, color);
    cout << "Enter a plural noun: ";
    getline(cin, noun);
    cout << "Enter a person's name: ";
    getline(cin, name);

    noun[0] = toupper(noun[0]);
    color[0] = tolower(color[0]);

    cout << "\nRoses are " << color << "\n";
    cout << noun << " are blue\n";
    cout << "I love " << name << "!\n";

    return 0;
}