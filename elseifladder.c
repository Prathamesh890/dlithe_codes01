#include<stdio.h>
int main()
{
	int a,b,c,total;
	float avg;
	printf("enter ur a,b,c sub marks");
	scanf("\n%d%d%d",&a,&b,&c);
	total=a+b+c;
	avg=total/3;
	printf("your avg marks is %f",avg);
	if(avg>90)
	{
		printf("\nur grade A+");
	}
	else if(avg>80)
	{
		printf("\nur grade is A");
	}
	else if(avg>70)
	{
		printf("\nur grade is B+");
		
	}
	else if(avg>60)
	{
		printf("\n ur grade is B");
	}
	else if(avg>50)
	{
		printf("\nur grade is C");
	}
	else if(avg>40)
	{
		printf("\n ur grade is D");
	}
	else if(avg>35)
	{
		printf("\n ur grade is E");
		
	}
	else
	printf("\n You Are Fail");
}
