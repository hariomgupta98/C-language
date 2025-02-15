#include<stdio.h>

int main() {
    int integer;
    float decimal;
    double doubl;
    char character;
    long int longinteger;

    printf("The size of int is %lu bytes", sizeof(integer));
    printf("\nThe size of float is %lu bytes", sizeof(decimal));
    printf("\nThe size of double is %lu bytes", sizeof(doubl));
    printf("\nThe size of char is %lu bytes", sizeof(character));
    printf("\nThe size of long int is %lu bytes", sizeof(longinteger));

    return 0;
} 