#include <iostream>
using namespace std;

int fibTerm(int n) {
    if (n == 1 || n == 2)
        return 1;

    int a = 1, b = 1, c;
    for (int count = 3; count <= n; count++) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    int res = fibTerm(n);
    cout << "The " << n << "th Fibonacci term is: " << res << endl;
    return 0;
}
