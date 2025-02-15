#include<stdio.h>

int main() {
    int i, j, k, n;

    // Ask user for number of rows
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    // Outer loop for each row
    for(i = 1; i <= n; i++) {
        // Inner loop for spaces
        for(j = 1; j <= n - i; j++) {
            printf(" ");  // Print spaces
        }

        // Inner loop for stars
        for(k = 1; k <= (2 * i - 1); k++) {
            printf("*");  // Print stars
        }

        // Move to the next line after each row
        printf("\n");
    }
return 0;
}


/*downword pyramide
11 statement change for(i = n; i >= 1; i--)*/