#include <iostream>
using namespace std;

class student
{
private:
    int ht;
    string name;
public:
    student()
    {
        ht = 123;
        name = "abc";
        cout << "Default Constructor: " << ht << ", " << name << endl;
    }
      student()
    {
        ht = 456;
        name = "abcd";
        cout << "Default Constructor: " << ht << ", " << name << endl;
    }

    student(int x)
    {
        ht = x;
        name = "xyz";
        cout << "One-parameter Constructor: " << ht << ", " << name << endl;
    }

    student(int a, string b)
    {
        ht = a;
        name = b;
        cout << "Two-parameter Constructor: " << ht << ", " << name << endl;
    }
     ~student()
    {
        cout << "Destructor called for: " << ht << ", " << name << endl;
    }
};

int main()
{
    student s1;
    student s2(456);
    student s3(789, "John");

    return 0;
}
