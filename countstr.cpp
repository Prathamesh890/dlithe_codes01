#include<iostream>
#include<ctype.h>
using namespace std;
int inc(char *s)
{
    int count=0;
    for(int i=0;s[i]!='/0';i++)
    {
        if(!(isspace s[i])|| (isalpha s[i])){
            count++;
        }
    }
    return count;

}
int main()
{
    char *s;
    cout<<"enter the char"<<endl;
    cin>>s;
    int count2=inc(s);
    cout<<"result is "<<count2<<endl;
    return 0;
}