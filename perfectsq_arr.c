#include<stdio.h>
#include<math.h>
int main()
{
	int i,j,n,y,x;
	float z;
	printf("enter the size of array");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		z=sqrt(a[i]);
		y=(int)z;
		x=y*y;
		if(x==a[i])
		{
			printf("%d\t",a[i]);
		}
	}
}
