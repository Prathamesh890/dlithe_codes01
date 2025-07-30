#include <iostream>
#include <string>
using namespace std;

class Employee {
    public:
        int id;
        char name[100];
        double salary;
        int experience;
        char department[100];
        char designation[100];

        void inputDetails() {
            cout << "Enter Employee ID: ";
            cin >> id;


            cout << "Enter Employee Name: ";
            cin>>name;

            cout << "Enter Salary: ";
            cin >> salary;

            cout << "Enter Experience (in years): ";
            cin >> experience;


            cout << "Enter Department: ";
            cin>>department;

            cout << "Enter Designation: ";
            cin>>designation;
        }

        void displayDetails() {
            cout << "\nEmployee Details: " << endl;
            cout << "ID: " << id << endl;
            cout << "Name: " << name << endl;
            cout << "Salary: " << salary << endl;
            cout << "Experience: " << experience << " years" << endl;
            cout << "Department: " << department << endl;
            cout << "Designation: " << designation << endl;
        }
};

int main() {
    int n;

    cin>>n;
    Employee emp[n];
    for(int i=0;i<n;i++ ){
    emp[i].inputDetails();
    emp[i].displayDetails();
    }
    bool found=false;
    int x;
    cout<<"enter ht";
    cin>>x;
    for(int i=0;i<n;i++)
    {


    if(x==emp[i].id)
    {
         found =true;
        emp[i].displayDetails();
    }
    }
    return 0;
    if(!found)
    {
        cout<<"not found";
    }
}
