#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main()
{
	int x,n,i,j,s=INT_MAX,l=INT_MIN,z=0,count,c,diff,mindiff=100;
	printf("enter value of n");
	scanf("%d",&n);
	int a[n];
	printf("enter the elemnts");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nenetr the value of x");
	scanf("%d",&x);
	for(i=0;i<n;i++)
{
	
	
		if(l<a[i])
		{
			l=a[i];
		}
		if(s>a[i])
		{
			s=a[i];
		}
	}

while(s<=l)
{
	count=0;

for(j=2;j<=sqrt(s);j++)
{
	if(s%j==0)
	count++;
}
if(count==0)
{
	for(i=0;i<n;i++)//to check x in array list
	{
	
    if(s==a[i])
    {
    	diff=abs(a[i]-x);
    	if(diff<mindiff)
    	{
    		mindiff=diff;
    		z=a[i];
		}
	}


}
}
s++;
     
 }
 printf("\n%d",z);
 return 0;
}
