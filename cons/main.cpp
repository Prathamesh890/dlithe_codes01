#include <iostream>
using namespace std;
class A {
public:
    int a = 10, b = 20;

    int add() {
        return a + b;
    }
};


class B {
public:
    int x = 5, y = 4;

    int sub() {
        return x - y;
    }
};


class C {
public:
    int x = 5, y = 4;

    int product() {
        return x * y;
    }
};

class D : public A, public B, public C {
public:
    float x = 5, y = 4;

    float divi() {
        return y != 0 ? x / y : 0;
    }
};

int main() {
    D obj;

    cout << "Sum (from A): " << obj.add() << endl;
    cout << "Subtraction (from B): " << obj.sub() << endl;
    cout << "Product (from C): " << obj.product() << endl;
    cout << "Division (from D): " << obj.divi() << endl;

    return 0;
}
