// Write a program that declares an integer variable and a pointer to it.
// Assign a value and print it using the pointer

#include <stdio.h>

int main()
{
    int num;
    int *ptr = &num;

    printf("Welcome to showcasing integer pointer\n");

    printf("Please enter the value : ");
    scanf("%d", ptr);

    printf("The value of num is : %d", *ptr);
    printf("\nThe value of num is : %d", num);

    return 0;

}