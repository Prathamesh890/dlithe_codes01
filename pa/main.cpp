#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    virtual void sound() {
        cout << "Animal makes a sound" << endl;
    }
};

// Derived class 1
class Dog : public Animal {
public:
    void sound() override {
        cout << "Dog barks" << endl;
    }
};

// Derived class 2
class Cat : public Animal {
public:
    void sound() override {
        cout << "Cat meows" << endl;
    }
};

// Main function
int main() {
    Animal* a;  //

    Dog d;
    Cat c;

    a = &d;
    a->sound();  // Output: Dog barks

    a = &c;
    a->sound();  // Output: Cat meows

    return 0;
}
