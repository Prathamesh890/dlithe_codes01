#include<stdio.h>
#include<math.h>
int main()
{
	float x=5,y=3,z,h;
	z=(sqrt(x)+pow(x,y));
	printf("%f",z);
	h=(log(x)+log10(x)+exp(x))/sqrt(y);
	printf("\n%f",h);
	return 0;
}
