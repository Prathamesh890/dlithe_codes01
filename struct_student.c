#include<stdio.h>
int main()
{
	struct student
	{
		char name[100];
		int m1;
		int m2;
		int m3;
		float avg;
		
	}b;
	int total;
		scanf("%s",b.name);
	
	scanf("%d",&b.m1);
	scanf("%d",&b.m2);
	scanf("%d",&b.m3);
	total=(b.m1+b.m2+b.m3);
	b.avg=total/3;
	printf("\nstudent name is %s",b.name);
	printf("\n m1 is %d",b.m1);
	printf("\nm2 is %d",b.m2);
	printf("\nm3 is %d",b.m3);
	printf("\ntotal is %d",total);
	printf("\naverage is %f",b.avg);
	return 0;
}
