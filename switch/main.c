#include <stdio.h>
#include <stdlib.h>


    #include <stdio.h>

int main() {
    int a,b,n;
    float c;
    printf("Enter a number (1 for adititon,2 for subraction,3 for multiplication 4 for division\n");
    scanf("%d",&n);
        if(n==5)
    {
        printf("invalid");
        exit(0);
    }
    printf("enter 2 numbers a and b\n");

    scanf("%d %d",&a,&b);



    switch(n) {
        case 1:
             printf("addition");
            c=a+b;
            printf("Result: %.2f\n", c);
            break;

        case 2:
              printf("subraction");
            c=a-b;
            printf("Result: %.2f\n", c);
            break;

        case 3:
             printf("multifilation");
            c=a*b;
            printf("Result: %.2f\n", c);
            break;
        case 4:
              printf("division");
            c=a/b;
           printf("Result: %.2f\n", c);


            break;



        default:
            printf("Invalid input! Please enter a number from 1 to 4.\n");
    }

    return 0;
}




