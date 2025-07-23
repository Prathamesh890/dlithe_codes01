#include<stdio.h>
int even(int x)
{
	if(x%2==0)
	{
		printf("even number");
		
	}
	else
	printf("odd number");
	return 0;
}
int prime(int x)
{
	int i,count=0;
	for(i=2;i<x/2;i++)
	{
		if(x%i==0)
		count++;
	}
	if(count==0)
	{
		printf("\nprime");
	}
    else
{
	printf("\nnot a prime");
}
return 0;
}
int main()
{
	int n;
	printf("enter a number");
	scanf("%d",&n);
	even(n);
	prime(n);
	return 0;
	
}
