#include<stdio.h>
int main(){
   const float PI = 3.14159;
  int radius;

  printf("Enter the radius of the circle in cm: ");
  scanf("%d",&radius);
  printf("The circumference of the circle is %f cm2",PI*radius*radius);
  return 0;  
}