#include<stdio.h>
int main()
{
	int n;
	float a,b,c;
	//or write here to read a and b values printf and scanf
	printf("choose a option for arithmetic operation");
	printf("\n1.Add\n2.Sub\n3.Mul\n4.Div");
	printf("\nenter your choice");
	scanf("%d",&n);
	switch(n)
	{
		case 1:
			printf("enter the values of a,b");
			scanf("%d%d",&a,&b);
			c=a+b;
			printf("add=%f",c);
			break;
			case 2:
			printf("enter the values of a,b");
			scanf("%d%d",&a,&b);
			c=a-b;
			printf("sub=%f",c);
			break;
			case 3:
			printf("enter the values of a,b");
			scanf("%d%d",&a,&b);
			c=a*b;
			printf("mul=%f",c);
			break;
			case 4:
			printf("enter the values of a,b");
			scanf("%d%d",&a,&b);
			c=a/b;
			printf("div=%f",c);
			break;
			default:
			printf("Invalid option");
			
			break;
	}
}
