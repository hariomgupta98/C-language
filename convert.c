#include<stdio.h>

int main() {
    int number; 
    printf("Please rnter a number: ");
    scanf("%d", &number);

    float floating = number; 
     printf("\n Original nuber is: %d", number);
     printf("\n flaot converted is: %f", floating);
     printf("\n float converted is: %f", (float) number);
     return 0;
}