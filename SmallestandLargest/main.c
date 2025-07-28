#include <stdio.h>

int main() {
    int num, digit;
    int smallest = 9, largest = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    while (num > 0) {
        digit = num % 10;
        if (digit > largest)
            largest = digit;
        if (digit < smallest)
            smallest = digit;
        num=num/10;
    }

    int sum = smallest + largest;
    printf("Sum of smallest and largest digit is: %d\n", sum);

    return 0;
}

