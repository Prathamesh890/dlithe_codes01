
#include <iostream>

using namespace std;
void func1(int arr[20],int n)
{for(int i=0;i<n;i++)
{
    int count=0;
    for(int j=0;j<n;j++)
    {
        if(arr[i]==arr[j])
        {
            count++;
        }
    }
    if(count==1)
    {
        cout<<arr[i];
    }
}


}


int main()
{
 int a[20],n,i;
 cout<<"enter the n value"<<endl;
 cin>>n;
 cout<<"enter the array elements"<<endl;
 for( i=0;i<n;i++){
    cin>>a[i];
 }
cout<<"unique elements are "<<g;
func1(a,n);



}


















































