// Create a program to calculate the Absolute value of a given integer using ternary Operator

#include <stdio.h>

int main()
{
    printf("Welcome to Absolute value of Integer \n");

    int num;
    printf("Enter any number : ");
    scanf("%d", &num);

    printf("%d is Absolute value", 
        (num>0  ? num
                : -num));

    return 0;
}