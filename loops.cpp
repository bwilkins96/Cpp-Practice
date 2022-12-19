#include <iostream>

using namespace std;

int main() {
    int index = 1;
    while (index <= 5) {
        cout << index << endl;
        index++;
    }

    index = 6;
    do {
        cout << index << endl;
        index++;
    } while (index <= 5);

    for (int i = 7; i <= 10; i++) {
        cout << i << endl;
    }

    int nums[] = {11, 12, 13, 14, 15};
    int arrLen = sizeof(nums) / sizeof(nums[0]);
    for (int i = 0; i < arrLen; i++) {
        cout << nums[i] << endl;
    }

    return 0;
}