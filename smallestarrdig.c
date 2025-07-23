#include<stdio.h>
#include<stdlib.h>
int main()
{
	int x,n,i,j,s=9,z=0,m,sum=0;
	printf("enetr value of n");
	scanf("%d",&n);
	int a[n];
	printf("enetr the elemnts");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
{
	x=a[i];
	while(x>0)
	{
	
	m=x%10;
	x=x/10;
	if(m<s)
	{
		sum=m;
		z=a[i];
	}
}
}
printf("smallest element is %d",z);
 return 0;
}
