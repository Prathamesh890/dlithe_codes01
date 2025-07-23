#include<stdio.h>
#include<ctype.h>
#include<string.h>
int cons(char *str,int n)
{
	int count=0;
	int i;
	for(i=0;i<n;i++)
	{
		if((str[i])!=('a'||'e'||'i'||'o'||'u'))
		count++;
	}
	return count;
	
}
int main()
{
	char str[100];
	int n;
	int consonant;
	scanf("%[]^/n]s",str);
	n=strlen(str);
	consonant=cons(str,n);
	printf("\n no.of consonants %d",consonant);
}
