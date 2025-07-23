#include<stdio.h>
int main()
{
	/*int a=278,b=353;
	printf("\n%d",a&b);
	printf("\n%d",a|b);
	printf("\n%d",a^b);
	printf("\n%d",a<<2);
	printf("\n%d",a>>2);*/
	int a;
	scanf("%d",&a);
	((a&1)==0)?printf("even"):printf("odd");
	
}
