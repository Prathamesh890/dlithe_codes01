#include<iostream>
#include<cmath> // For sqrt function
using namespace std;

int main()
{
    float a, b, c, discriminant, root1, root2;

    cout << "Enter coefficients a, b, and c: ";
    cin >> a >> b >> c;

    discriminant = b * b - 4 * a * c;

    if (discriminant >= 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "Roots are: " << root1 << " and " << root2 << endl;
    } else {
        cout << "No real roots exist." << endl;
    }

    return 0;
}