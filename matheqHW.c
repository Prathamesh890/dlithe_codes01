#include<stdio.h>
#include<math.h>
int main()
{
	int x=15,y=4;
	float a,b,c,d;
	a=(sin(x)+cos(x))/tan(x);
	b=(log(pow(x,y))+exp(pow(x,y)))/pow(x,y);
	c=sqrt((log(x)+exp(y))/log10(x));
	d=(sin(x)+cos(x)+tan(x))/(log10(pow(x,y)));
	printf("\n%f,\n%f,\n%f,\n%f",a,b,c,d);
}
