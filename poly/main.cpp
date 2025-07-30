#include <iostream>
using namespace std;


class Shape {
public:
    virtual void area() {
        cout << "Area of shape" << endl;
    }
};


class Circle : public Shape {
public:
    float radius;
    Circle(float r) {
        radius = r;
    }

    void area() override {
        cout << "Area of Circle: " << 3.14 * radius * radius << endl;
    }
};


class Rectangle : public Shape {
public:
    float length, breadth;
    Rectangle(float l, float b) {
        length = l;
        breadth = b;
    }

    void area() override {
        cout << "Area of Rectangle: " << length * breadth << endl;
    }
};


class Triangle : public Shape {
public:
    float base, height;
    Triangle(float b, float h) {
        base = b;
        height = h;
    }

    void area() override {
        cout << "Area of Triangle: " << 0.5 * base * height << endl;
    }
};

int main() {
    Shape* s;

    Circle c(5);
    Rectangle r(4, 6);
    Triangle t(3, 7);

    s = &c;
    s->area();

    s = &r;
    s->area();

    s = &t;
    s->area();

    return 0;
}
