#include <iostream>
using namespace std;

// Function to swap values using pass-by-reference
void swap(int &a, int &b)
{
    a = a + b;
    b = a - b;
    a = a - b;
}

int main() {
    int x, y;

    
    cout << "Enter two numbers (x and y) to swap: ";
    cin >> x >> y;

    
    swap(x, y);

    
    cout << "After swapping: x = " << x << ", y = " << y << endl;

    return 0;
}
