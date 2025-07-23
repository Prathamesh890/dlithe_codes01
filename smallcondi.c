#include<stdio.h>
int main()
{
	int a,b,small;
	printf("enter value a and b\n");
	scanf("\n%d%d",&a,&b);
	small=(a<b)?a:b;
	printf("smallest number is %d",small);
}
