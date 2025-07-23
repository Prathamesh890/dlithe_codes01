/*#include<stdio.h>
#include<math.h>

int main()
{
    int s, e, i, n, count;

    printf("Enter starting and ending range: ");
    scanf("%d %d", &s, &e);

    for(n = s; n <= e; n++)
    {
        if (n < 2)
        {
            printf("%d: not a prime\n", n);
        }
        else
        {
            count = 0;
            for(i = 2; i <= sqrt(n); i++)
            {
                if(n % i == 0)
                {
                    count++; 
                    break;
                }
            }
            if(count == 0)
                printf("%d: prime\n", n);
            else
                printf("%d: not a prime\n", n);
        }
    }

    return 0;
}*/
#include<stdio.h>
#include<math.h>

int main()
{
    int s, e, i, n, count,prime=0;

    printf("Enter starting and ending range: ");
    scanf("%d %d", &s, &e);

    for(n = s; n <= e; n++)
    {
        if (n < 2)
        {
            printf("%d: not a prime\n", n);
        }
        else
        {
            count = 0;
            for(i = 2; i <= sqrt(n); i++)
            {
                if(n % i == 0)
                {
                    count++; 
                    
                }
                
                
            }
            if(count==0)
                prime++;
        }
    }
    
            
            
    
    printf("number of prime number:%d",prime);
    
            


    return 0;
}

