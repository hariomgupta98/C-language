/*#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    { // outer loop to print rows
        for (int j = 1; j <= i; j++)
        { // inner loop to print stars
            printf("* ");
        } // move to the next line after each row
        printf("\n");
    }
    return 0;
}*/

#include<stdio.h>
int main(){
    int i, j, n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    for(i = n; i >= 1; i--) {
        for(j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}