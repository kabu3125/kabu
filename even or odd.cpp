#include <iostream>

using namespace std;

int main() {
    int number;

    // Input from the user
    cout << "Enter an integer: ";
    cin >> number;

    // Check if the number is even or odd
    if (number % 2 == 0) {
        cout << number << " is an even number.\n";
    } else {
        cout << number << " is an odd number.\n";
    }

    return 0;
}
