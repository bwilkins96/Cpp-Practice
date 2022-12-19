#include <iostream>

using namespace std;

void sayHi(string name, int age) {
    cout << "Hello " << name << ", you are " << age << "!\n";
}

double cube(double num) {
    return num * num * num;
}

int main() {   
    sayHi("Mike", 40);
    sayHi("Steve", 19);

    cout << "\n" << cube(5.0) << "\n";
    
    return 0;
}