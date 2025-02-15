#include<stdio.h>

int main() {
    float principal, rate, time;
    printf("Welome to Simple  Interest Calulator.\n");
    printf("Enter the principal amount: ");
    scanf("%f", &principal);
    printf("Enter the rate of interest: ");
    scanf("%f", &rate);
    printf("Enter the time period: ");
    scanf("%f", &time);

    float interest = (principal * rate * time) /100;
    printf("The simple interest is: %f", interest);
    return 0;
}