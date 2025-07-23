#include<stdio.h>
#include<math.h>
int main()
{
	int n,d=0,sum=0,r,x,y;
	scanf("%d",&n);
	x=n;
	y=n;
	while(n>0)
	{
		d++;
		n=n/10;
	}
	while(x>0)
	{
		r=x%10;
		sum=sum+pow(r,d);
		x=x/10;
		
	}
	if(y==sum)
	printf("armstrong");
	else
	printf("not a armstrong");
}
