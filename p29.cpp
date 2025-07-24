#include <iostream>
using namespace std;

// Function to check if number is positive
bool isPositive(int n) {
    if(n>=0)
        return true;
    else
        return false;
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
