#include<stdio.h>
#include<math.h>
int main()
{
	int n,i,j,temp,r,digi,sum=0,count=0,flag,z;
	
	printf("enter n value");
	scanf("%d",&n);
	temp=n;
	for(i=2;i<=sqrt(n);i++)
	{
		if(n%i==0)
		count++;
		
	}
	if (count==0)
	
	{
		while(n>0)
		{
			r=n%10;
			sum=sum+r;
			n=n/10;
			
		}
		count=0;
		for(j=2;j<=sqrt(sum);j++)
	{
		if(sum%i==0)
		count++;
		
	}
	if (count==0)
	
	{
		while(temp>0)
		{
			z=temp%10;
			if(!(z==2||z==3||z==5||z==7))
			{
			
					
			flag=1;
			temp=temp/10;
		}
	}
		if(flag==0)
		{
			printf("perfect prime");
		}
		else
		{
			printf(" not perfect prime");
		}
		
		else
		{
			printf("not perfect prime number");
		}
		else
		{
			printf(" not perfect prime");
		}
			
		
		
		
}
}
}

}


