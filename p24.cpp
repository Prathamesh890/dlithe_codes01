#include <iostream>
using namespace std;

// Function to check if number is even
bool isEven(int n) {
    return (n % 2 == 0);
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (isEven(number)) {
        cout << "The number is even." << endl;
    } else {
        cout << "The number is odd." << endl;
    }

    return 0;
}
