#include<stdio.h>
int main(){
    int num;
    input_number:
    printf("Please enter the number: ");
    scanf("%d", &num);
    
    if (num !=10) {
        goto input_number;
    }
    return 0;
}