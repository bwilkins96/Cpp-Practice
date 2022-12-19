#include <iostream>

using namespace std;

int main() {
    int age = 19;
    int *pAge = &age;
    double gpa = 3.9;
    double *pGpa = &gpa;
    string name = "Mike";
    string *pName = &name;

    cout << "age: " << &age << "\n";
    cout << "gpa: " << &gpa << "\n";
    cout << "name: " << &name << "\n";
    cout << "\n";
    cout << "pAge: " << pAge << "\n";
    cout << "*pAge: " << *pAge << "\n";
    cout << "*&gpa: " << *&gpa << "\n";

    return 0;
}