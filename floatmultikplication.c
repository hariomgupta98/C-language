#include<stdio.h>

int main() {
float first, second;
printf("Please enter the first nuber: ");
scanf("%f", &first);
printf("Enter the second number: ");
scanf("%f", &second);

float result = first * second;
printf("\n Product id: %f", result);
return 0;
}