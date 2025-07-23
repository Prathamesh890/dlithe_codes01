#include<stdio.h>
int main()
{
	int a=20,b=30,c;
	int *p,*q;
	p=&a;
	q=&b;
	//p to access address
	//*p to access value 
	//%p to in hexadecimal address
	printf("The value of a=%d",*p);
	printf("\n The address of a=%p",p);
	printf("\n\nThe value of b=%d",*q);
	printf("\n The address of a=%p",q);
	c=*p+*q;
	printf("add =%d\n",c);
	if(*p<*q)
	printf("a is min");
	else
	printf("b is min");
	return 0;
}
