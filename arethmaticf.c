#include<stdio.h>
int addition(int a,int b)
{
	int c;
	c=a+b;
	return c;
}
int subtraction( int d,int e)
{
	int f;
	f=d-e;
	return f;
}
int multiplication( int g,int i)
{
	int j;
	j=g*i;
	return j;
}
float division( float k,float l)
{//here fn u canuse same variable j,c 
	float m;
	m=k/l;
	return m;
}

int main()
{
	int x,y,z,n,o;
	float p ;//here cant same
	scanf("%d%d",&x,&y);
	z=addition(x,y);
	printf("\n%d\n",z);
	n=subtraction(x,y);
	printf("\n%d\n",n);
	o=multiplication(x,y);
	printf("\n%d\n",o);
	p=division(x,y);
	printf("\n%f/\n",p);

}
