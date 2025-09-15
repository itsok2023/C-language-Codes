// Create a program to check if a number is an Armstrong number

#include <stdio.h>

int main()
{
    printf("Welcome to Armstrong Number checker : \n");

    int num, i;
    printf("Enter any number : ");
    scanf("%d",&num);

    int sum = 0;
    int copy = num;

    while (num > 0){

        int digit = num % 10;
        sum = sum + (digit * digit * digit);
        num = num / 10;
    }
    
    if( sum == copy)
    {
        printf("The number %d is a Armstrong number", copy);
    }
    else
    {
        printf("Ther number %d is not a Armstrong Number", copy);
    }

    return 0;
}