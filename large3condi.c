#include<stdio.h>
int main()
{
	int a,b,c,large,temp;
	printf("enter value a and b\n");
	scanf("\n%d%d%d",&a,&b,&c);
	temp=(a>b)?a:b;
	large=(temp>c)?temp:c;
	printf("largest number is %d",large);
}
