#include<stdio.h>
#include<stdlib.h>

int factorial(int n)
{
return n;
}
int main()
{
int num,f=1;
scanf("%d",&num);
for(int i=1;i<num;i++)
{
f=f*factorial(i);
}
printf("factorial =%d",f);
return 0;
}
