#include<stdio.h>

int main()
{
	int n,i,j,temp,k,x,y,z;
	printf("enter n value");
	scanf("%d",&n);
	int a[n];
	printf("enter the elements");
	for(i=0;i<n;i++)
	{
	
	scanf("%d",&a[i]);
}
printf("enetr the value for k");
scanf("%d",&k);
for(i=0;i<n;i++)
{
	for(j=i+1;j<n;j++)
	{
		if(a[i]>a[j])
		{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
	}
}
for(i=0;i<n;i++)
{
	printf("%d\t",a[i]);
}
      x=a[n-k];
      y=a[k-1];
      printf("\nlargest  number %d",x);
      printf("\nsmallest  number is %d",y);
      z=x*y;
      printf("product is %d",z);
}
