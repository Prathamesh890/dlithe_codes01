#include <iostream>
#include <cmath> // for sqrt()
using namespace std;

// Function to calculate roots
void findRoots(float a, float b, float c) {
    float discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        float root1 = (-b + sqrt(discriminant)) / (2 * a);
        float root2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "Roots are real and distinct:" << endl;
        cout << "Root 1 = " << root1 << endl;
        cout << "Root 2 = " << root2 << endl;
    } 
    else if (discriminant == 0) {
        float root = -b / (2 * a);
        cout << "Roots are real and equal:" << endl;
        cout << "Root = " << root << endl;
    } 
    else {
        float realPart = -b / (2 * a);
        float imaginaryPart = sqrt(-discriminant) / (2 * a);
        cout << "Roots are complex and imaginary:" << endl;
        cout << "Root 1 = " << realPart << " + " << imaginaryPart << "i" << endl;
        cout << "Root 2 = " << realPart << " - " << imaginaryPart << "i" << endl;
    }
}

int main() {
    float a, b, c;
    cout << "Enter coefficients a, b, and c: ";
    cin >> a >> b >> c;

    if (a == 0) {
        cout << "This is not a quadratic equation." << endl;
    } else {
        findRoots(a, b, c);
    }

    return 0;
}
