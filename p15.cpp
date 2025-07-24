#include<iostream>
using namespace std;
float areaoftri(float l,float b)
{
    return 0.5*l*b;
}
int  main()
{
    float a,b;
    cout<<"enter the length and breadth of a triangle"<<endl;
    cin>>a>>b;
    float area=areaoftri(a,b);
    cout<<"area of triangle is "<<area<<endl;
    return 0;
}