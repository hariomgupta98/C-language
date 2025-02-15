#include<stdio.h>

int main() {
    int a, b, c, d;
    printf("Please enter the first side: ");
    scanf("%d",&a);
    printf("Please enter the second side: ");
     scanf("%d",&b);
    printf("Please enter the third side: ");
    scanf("%d",&c);
    printf("Please enter the forth side: ");
     scanf("%d",&d);
int perimeter = a + b + c + d;
printf("\n The perimeter of the rectangle is: %d", perimeter);
return 0;
}
