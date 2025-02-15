#include<stdio.h>

int main() {
    int first, second;
    printf("Enter the first number: ");
    scanf("%d", &first);
    printf("Now,Enter the second number: ");
    scanf("%d", &second);

    printf("Here are the results of the opertaions");
    printf("\n%d + %d = %d", first, second, (first + second));
    printf("\n%d - %d = %d", first, second, (first - second));
    printf("\n%d * %d = %d", first, second, (first * second));
    printf("\n%d / %d = %d", first, second, (first / second));
    printf("\n%d modulo %d = %d", first, second, (first % second));
    return 0;
}