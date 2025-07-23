/*#include<stdio.h>
#include<math.h>

int main()
{
    int start, end, n, d, sum, r, x, y;

    printf("Enter start and end values: ");
    scanf("%d%d", &start, &end);

    printf("Armstrong numbers between %d and %d are:\n", start, end);

    for(n = start; n <= end; n++)
    {
        d = 0;
        sum = 0;
        x = n;
        y = n;

        // count number of digits
        while(x > 0)
        {
            d++;
            x = x / 10;
        }

        x = n;
        // calculate sum of digits raised to power d
        while(x > 0)
        {
            r = x % 10;
            sum = sum + pow(r, d);
            x = x / 10;
        }

        if(sum == y)
            printf("%d\n", y);
    }

    return 0;
}
*/
#include<stdio.h>
#include<math.h>

int main()
{
    int start, end, n, d, sum, r, x, y, count = 0;

    printf("Enter start and end values: ");
    scanf("%d%d", &start, &end);

    printf("Armstrong numbers between %d and %d are:\n", start, end);

    for(n = start; n <= end; n++)
    {
        d = 0;
        sum = 0;
        x = n;
        y = n;

        // count number of digits
        while(x > 0)
        {
            d++;
            x = x / 10;
        }

        x = n;
        // calculate sum of digits raised to power d
        while(x > 0)
        {
            r = x % 10;
            sum = sum + pow(r, d);
            x = x / 10;
        }

        if(sum == y)
        {
            printf("%d\n", y);
            count++;
        }
    }

    printf("Total number of Armstrong numbers = %d\n", count);

    return 0;
}

