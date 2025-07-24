#include <iostream>
using namespace std;


int findMinimum(int a, int b) {
    if (a < b)
        return a;
    else
        return b;
}

int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    int minValue = findMinimum(num1, num2);
    cout << "The minimum of the two numbers is: " << minValue << endl;

    return 0;
}
