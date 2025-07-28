#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int a[n][n];

    // Input matrix elements
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    // Print diagonal elements
    for (int i = 0; i < n; i++) {
        // Main diagonal: i == j
        printf("%d ", a[i][i]);

        // Secondary diagonal: i + j == n - 1
        if (i != n - i - 1)  // Avoid duplicate for center element when n is odd
            printf("%d ", a[i][n - 1 - i]);
    }

    return 0;
}
