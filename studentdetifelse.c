#include<stdio.h>
int main()
{
	int m,p,c,total;
		float avg;
		printf("enter ur marks");
		scanf("%d%d%d",&m,&p,&c);
		if(m>35)
		{
			if(p>35)
			{
				if(c>35)
				{
					total=m+p+c;
					avg=total/3;
					printf("result=pass");
					printf("total marks=%d\n avg marks=%f",total,avg);
				}
				else
				{
					printf("failed in chem");
				}
		    }
			else
			{
					printf("failed in phy");
			}
	    }
		else
		{
					printf("failed in maths");
		}
	  
		
    }
		

