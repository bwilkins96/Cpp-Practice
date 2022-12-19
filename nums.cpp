#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int wnum = 5;
    double dnum = 5.5;
    wnum++;

    cout << wnum << endl;
    cout << "\n";

    cout << 4 * 6 << endl;
    cout << 10 % 2 << endl;
    cout << 10 / 3 << endl;
    cout << 20 / 4.5 << endl;
    cout << "\n";

    cout << pow(2, 5) << endl; //1^2
    cout << sqrt(36) << endl;
    cout << round(4.3) << endl;
    cout << round(4.6) << endl;
    cout << floor(4.6) << endl;
    cout << ceil(4.3) << endl;
    cout << fmax(2, 10) << endl;
    cout << fmin(2, 10) << endl;

    return 0;
}