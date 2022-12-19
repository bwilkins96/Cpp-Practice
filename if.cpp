#include <iostream>

using namespace std;

int getMax(int num1, int num2, int num3) {
    if (num1 >= num2 && num1 >= num3) {
        return num1;
    } else if (num2 >= num1 && num2 >= num3) {
        return num2;
    } else {
        return num3;
    }
}

int main() {
    bool isMale = false;
    bool isTall = true;

    if (isMale && isTall) {
        cout << "You are a tall male\n";
    } else if (isMale || isTall) {
        if (!isMale) {
            cout << "You are tall but not a male\n";
        } else {
            cout << "You are a short male\n";
        }
    } else {
        cout << "You are neither tall nor a male\n";
    }

    cout << getMax(10, 150, 25) << "\n";

    return 0;
}