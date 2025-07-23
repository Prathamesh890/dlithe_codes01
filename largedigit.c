/*#include<stdio.h>
int main()
{
	int n,l=0,r;
	scanf("%d",&n);
	while(n>0)
	{
		r=n%10;
		if(r>l)
		{
			l=r;
			
		}
		n=n/10;
	}
	printf("large is %d",l);
}

*/
///sum of largest and smallest number
#include<stdio.h>
int main()
{
	int n,l=0,r,s=9,sum=0;
	scanf("%d",&n);
	
	while(n>0)
	{
		r=n%10;
		if(r>l)
		{
			l=r;
			
		}
		if(r<s)
		    {
		    	s=r;
			}
		n=n/10;
	}
	sum=s+l;
	printf("sum is %d",sum);
}
