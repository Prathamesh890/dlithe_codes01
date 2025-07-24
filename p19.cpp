#include <iostream>
using namespace std;

bool isEven(int n) {
    return (n % 2 == 0);  // returns true if even
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    bool result = isEven(number);

    if (result) {
        cout << "The number is even." << endl;
    } else {
        cout << "The number is odd." << endl;
    }

    return 0;
}
