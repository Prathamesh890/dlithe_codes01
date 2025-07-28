#include <stdio.h>

int main()
{
    int n, sum = 0, r, digit;

    printf("Enter a number: ");
    scanf("%d", &n);

    r = n;
    while(n > 0)
    {
        digit = n % 10;
        sum = sum * 10 + digit;
        n = n / 10;
    }

    if(r == sum)
    {
        printf("palindrome");
    }
    else
    {
        printf("not");
    }

    return 0;
}
