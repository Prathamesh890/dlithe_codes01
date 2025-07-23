#include<stdio.h>
int main()
{
	int i,j,m,n;
	printf("\nenter the value of n");
	scanf("%d",&n);
	int a[n];
	
	printf("\nenter the elemnts");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nenter the value of m");
	scanf("%d",&m);
	int b[m];
	printf("\nenter the elemnts");
	for(j=0;j<m;j++)
	{
		scanf("%d",&b[j]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(a[i]==b[j])
			{
				printf("common elements %d",a[i]);
			}
		}
	}
}
