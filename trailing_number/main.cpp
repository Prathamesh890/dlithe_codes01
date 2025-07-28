#include <iostream>

using namespace std;

int factorial(int n) {
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result=result * i;
    }
    return result;
}
int countTrailingZero(int x)
{int count=0;
while(x %10==0 && x!=0)
{
    count++;
    x=x/10;
}
return count;
}




 int main()
{
    int n;
    cout<<"enter the number";
    cin>>n;
    int facto=factorial(n);
    int zero=countTrailingZero(facto);
    cout<<"factorial of a given number is"<<facto;
    cout<<"count of zero is"<<zero;
    return 0;
}
