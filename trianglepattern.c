
///right anglle
/*#include<stdio.h>
int main()
{

	int n,i,j;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for( j=1;j<=i;j++)
		{
			
			printf("* ");
		}
		printf("\n");
	} 
}*/
/*
//pyramid triangle
#include<stdio.h>
int main()
{

	int n,i,j;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for( j=1;j<=n;j++)
		{
			if(j<=n-i)
			{
				printf(" ");
			}
			else
			printf("* ");
		}
		printf("\n");
	} 
}*/
///////left
/*
#include<stdio.h>
int main()
{


	int n,i,j,k;
	scanf("%d",&n);
	for(i=1;i<=n;i++)//rows
	{
		for( j=i;j<n;j++)//column
		{
			printf(" ");//spacing
		}
		for(k=1;k<=i;k++)
			{
				printf("*");
			}
				printf("\n");
			
		}
	
 
}*/

////up down tri
#include<stdio.h>
int main()
{


	int n,i,j,k;
	scanf("%d",&n);
	for(i=1;i<=n;i++)//rows
	{
		for( j=5;j>=i;j--)//column
		{
			printf("* ");//spacing
		}
	
				printf("\n");
			
		}
	
 
}
