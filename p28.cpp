#include <iostream>
using namespace std;

// Function to check if number is positive
bool isPositive(int n) {
    return (n >= 0);
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (isPositive(number)) {
        cout << "The number is positive." << endl;
    } else {
        cout << "The number is negative." << endl;
    }

    return 0;
}
