#include<iostream>
using namespace std;

int greatestOf2(int a, int b) {
    return (a > b) ? a : b; // returns the greater of the two numbers
}
int main()
{
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    int greatest = greatestOf2(num1, num2);
    cout << "The greater number is: " << greatest << endl;

    return 0;
}