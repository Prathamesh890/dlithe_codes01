#include<stdio.h>
int main()
{
	int n;
	float a,l,b,r,h,z;
	printf("enter the option to calaculate area");
	printf("\n1.Area of square\n2.Area of rectangle\n3.Area of circle\n4.Area of triangle");
	scanf("%d",&n);
	switch(n)
	{
		case 1:
			printf("enter the length");
			scanf("%f",&a);
			z=a*a;
			printf("area of square is %f",z);
			break;
			case 2:
			printf("enter the length and breadth");
			scanf("%f%f",&l,&b);
			z=l*b;
			printf("area of rectangle is %f",z);
			break;
			case 3:
			printf("enter the radius");
			scanf("%f",&r);
			z=3.14*r*r;
			printf("area of circle is %f",z);
			break;
			case 4:
			printf("enter the breadth,height");
			scanf("%f%f",&b,&h);
			z=0.5*b*h;
			printf("area of triangle is %f",z);
			break;
			default :
				printf("invalid choice");
			break;
			
	}
}
