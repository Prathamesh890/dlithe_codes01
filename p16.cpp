#include<iostream>
using namespace std;

void swap2(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int x, y;
    cout << "enter the x and y elements to swap" << endl;
    cin >> x >> y;
    swap2(x, y);
    cout << "after swapping " << x << " " << y << endl;
    return 0;
}