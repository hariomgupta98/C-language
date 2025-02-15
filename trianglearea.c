#include<stdio.h>

int main() {
    int base, height;
    printf("Please enter the base: ");
    scanf("%d", &base);
    printf("Please enter the height:");
    scanf("%d", &height);
    int area = 0.5 * base * height;
    printf("The area of triangle is: %d", area);
    return 0;
}