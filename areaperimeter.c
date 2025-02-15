#include<stdio.h>
int main(){
    int l;
    printf("Enter length : ");
    scanf("%d",&l);
    int b;
    printf("Enter breadth : ");
    scanf("%d", &b);
    int a = l*b;
    int p = 2* (l + b);
    if (a>p){
        printf("Area is grater than perimeter");
    }
    else{
        printf("Area is not grater than perimeter");
    }
    return 0;
}