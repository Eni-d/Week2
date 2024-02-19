#include <iostream>
#include <string>
using namespace std;

int main() {
    int number;

    cout << "Guess number: ";
    cin >> number;

    switch (number) {
    case 2:
        cout << "You guessed correctly!" << endl;
        break;
    default:
        cout << "You guessed wrongly!" << endl;
        break;
    }

    int a = 3, b = 4;
    string result = (a > b) ? "a is greater than b" : "a is less than b";
    cout << result;

    return 0;
}