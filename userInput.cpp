#include <iostream>

using namespace std;

int main() {
    string name;
    int age;
    
    cout << "Enter your name: ";
    getline(cin, name);

    cout << "Enter your age: ";
    cin >> age;

    cout << "\nHello " << name << ", you are " << age << " years old!\n";
 
    return 0;
}