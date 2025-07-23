#include<stdio.h>
int main()
{
	int n,x,r,z,sum=0;
	scanf("%d",&n);
	x=n;
	while(n>0)
	{
		r=n%10;
		sum=sum+r;
		n=n/10;
		
	}
	z=x%sum;
	if(z==0)
	{
		printf("Naive num");
	}
	else
	{
		printf("not a naive");
	}
	
}
