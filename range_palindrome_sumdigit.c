#include<stdio.h>
int main()
{
	/*int s,e;
	scanf("%d%d",&s,&e);
	while(s<=e)
	{
		printf("%d\t",s);
		s++;
	}*/
	/*int s,e;
	scanf("%d%d",&s,&e);
	while(s<=e)
	{
		if(s%2==0)
		{
		
		printf("%d\t",s);
		
	}
	s++;
	}
	*/
	/*int s,e;
	scanf("%d%d",&s,&e);
	while(s<=e)
	{
		
		{
		
		printf("%d\t",e);
		e--;
		
	}
	
	}
	*/
	/*int s,e,sum;
	scanf("%d%d",&s,&e);
	while(s<=e)
	{
		sum=sum+s;
		s++;
	}
	printf("%d",sum);*/
	/*
	int s,e,sum;
	scanf("%d%d",&s,&e);
	while(s<=e)
	{
		if(s%2==0)
		{
		sum=sum+s;
	}
    	s++;
		
		
	}
	printf("%d\t",sum);

	*/
	///ADDING NUMBERS SEPARETELY ADDING DIGITS
	/*int n,i,sum=0,r;
	printf("enter a number");
	scanf("%d",&n);
	while(n>0)
	{
		r=n%10;
		sum=sum+r;
		n=n/10;
	}
	
	printf("sum is %d",sum);
	*/
	////Reversing the number
	/*int n,sum=0,r;
	printf("enetr number");
	scanf("%d",&n);
	while(n>0)
	{
		r=n%10;
		sum=sum*10+r;
		n=n/10;
	}
	printf("reverse number is %d",sum);
	*/
	//PALINDROME
	int x,n,sum=0,r;
	printf("enetr number");
	scanf("%d",&n);
	x=n;
	while(n>0)
	{
		r=n%10;
		sum=sum*10+r;
		n=n/10;
	}
	
	if(sum==x)
	{
		printf("palindrome");
	}
	else
	{
		printf("not a palindrome");
	}
	printf("%d\n",sum);
	
	
}

