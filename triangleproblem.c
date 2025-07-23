#include<stdio.h>
int main()
{
	int i,j,n;
	scanf("%d",&n);
	int a[n][n];
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<=i;j++)//for upper j>=i 
		{
			//if(i==j)  //for diagonal
			printf("%d\t",a[i][j]);//orprintf("%d",a[i][i]
		}
		printf("\n");
		
	
}
}
