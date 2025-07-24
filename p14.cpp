#include<iostream>
using namespace std;
float areaofcircle(float r)
{
    return 3.14*r;
}
int main()
{
    int r;
    cout<<"enter the radius of the circle"<<endl;
    cin>>r;
    float area=areaofcircle(r);
    cout<<"area of circle is "<<area<<endl;
    return 0;
}