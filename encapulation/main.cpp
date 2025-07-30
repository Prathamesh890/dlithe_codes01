
#include <iostream>
using namespace std;

class Person {
private:
    string name;

public:
    void setName(string n) {
        name = n;
    }

    string getName() {
        return name;
    }
};

int main() {
    Person p;

    p.setName("Atlantis");
    cout << "Name: " << p.getName() << endl;

    return 0;
}


