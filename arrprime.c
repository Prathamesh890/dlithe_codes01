#include<stdio.h>
#include<math.h>
int main()
{
    int n, i, j, temp, r, sum=0, count=0, flag=0, z;

    printf("Enter n value: ");
    scanf("%d", &n);
    temp = n;

    // Check if n itself is prime
    count = 0;
    for(i=2; i<=sqrt(n); i++)
    {
        if(n % i == 0)
        {
            count++;
            break;  // no need to continue if divisor is found
        }
    }

    if(count==0 && n>1)  // n is prime and greater than 1
    {
        // Find sum of digits
        while(n > 0)
        {
            r = n % 10;
            sum += r;
            n /= 10;
        }

        // Check if sum of digits is prime
        count = 0;
        for(j=2; j<=sqrt(sum); j++)
        {
            if(sum % j == 0)
            {
                count++;
                break;
            }
        }

        if(count==0 && sum>1)
        {
            // Check if all digits are prime digits (2,3,5,7)
            flag = 0; // assume all digits are prime digits
            while(temp > 0)
            {
                z = temp % 10;
                if(!(z==2 || z==3 || z==5 || z==7))
                {
                    flag = 1; // found a non-prime digit
                    break;
                }
                temp /= 10;
            }

            if(flag==0)
            {
                printf("Perfect prime number\n");
            }
            else
            {
                printf("Not perfect prime number (contains non-prime digit)\n");
            }
        }
        else
        {
            printf("Not perfect prime number (sum of digits is not prime)\n");
        }
    }
    else
    {
        printf("Not perfect prime number (number itself is not prime)\n");
    }

    return 0;
}

