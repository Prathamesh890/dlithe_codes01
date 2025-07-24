#include<iostream>
using namespace std;
int areaofrec(int a,int b)
{
    return a*b;
}
int main()
{
    int a,b;
    cout<<"enter the length and breadth of a rectangle"<<endl;
    cin>>a>>b;
    int area=areaofrec(a,b);
    cout<<"the area of rectangle is "<<area<<endl;
    return 0;


}