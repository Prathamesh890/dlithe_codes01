#include<stdio.h>
int main()
{
	int n=1,m=25;
	while(n<=m)
	{
		if((n>5&&n<10)||(n>15&&n<20))
		{
			n++;
			continue;
			
		}
		printf("%d\t",n);
		n++;
	}
}
