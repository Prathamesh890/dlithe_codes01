#include<iostream>
using namespace std;
int areaofsquare(int a)
{
    return a*a;

}
int main()
{
    int a;
    cout<<"enter the side"<<endl;
    cin>>a;
    int area=areaofsquare(a);
    cout<<"area of square is "<<area<<endl;
    return 0;

}