/*#include<stdio.h>
int main()
{

	int n,i,j;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for( j=1;j<=i;j++)
		{
			
			printf("%d ",j);
		}
		printf("\n");
	} 
}
*/


///123445

/*
#include<stdio.h>
int main()
{


	int n,i,j,m=1;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for( j=1;j<=i;j++)
		{
			
			printf("%d\t ",m);
			m++;
		}
		printf("\n");
	} 
}
*/


////ABCABCAB
/*
#include<stdio.h>
int main()
{


	int n,i,j;
	char c;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		c='A';
		for( j=1;j<=i;j++)
		{
			
			printf("%c\t ",c);
			c++;
		}
		printf("\n");
	} 
}*/

/*
#include<stdio.h>
int main()
{


	int n,i,j;
	char c='A';
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		
		for( j=1;j<=i;j++)
		{
			
			printf("%c\t ",c);
			c++;
		}
		printf("\n");
	} 
}*/


//HOLLOW SQUARE
#include<stdio.h>
int main()
{


	int n,i,j;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i==1||i==n)//i==(n+1)/2
		{
		
		for( j=1;j<=n;j++)
		{
			
			printf("* ");
			
		}
	}
	else
	{
		for(j=1;j<=n;j++)
	{ 
	if(j==1||j==n)
	printf("* ");
	else
	printf("  ");
	}
		
	} 
	printf("\n");
}
}

