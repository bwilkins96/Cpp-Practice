#include <iostream>

using namespace std;

int main() {
    string phrase = "Hello world!";

    cout << phrase << endl;
    cout << phrase.length() << endl;
    cout << phrase[0] << endl;

    phrase[1] = 'E';
    cout << phrase << endl;
    
    cout << phrase.find("world", 0) << endl;
    cout << phrase.substr(1, 4) << endl; //(idx, length)

    return 0;
}