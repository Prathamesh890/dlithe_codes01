#include <stdio.h>
#include <stdlib.h>

int main()
{
int s,e,sum;
scanf("%d %d",&s,&e);
while(s<=e)
{
if(sum % 2 == 0)
{
   sum=sum+s;
}

s++;

 }
printf("sum is %d",sum);

}

