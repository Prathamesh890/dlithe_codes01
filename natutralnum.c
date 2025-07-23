#include<stdio.h>
int main()
{
	int n,i;
	printf("enter number for natural numbers to find");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{ 
	if((i%2==0))
		printf("\n%d",i);
	}
}
