// Create a program to verify if a number is a palindrome.

#include <stdio.h>

int main()
{
    printf("Welcome to Palindrome Checker : \n");
    int num;
    printf("Enter any number : ");
    scanf("%d", &num);

    int reverse = 0;
    int copy = num;

    while (copy > 0){
        reverse = (reverse * 10) + (copy % 10);
        copy = copy / 10;
    }

    if(reverse == num)
    {
        printf("Number is Palindrome");
    }
    else
    {
        printf("Number is not a Palindrome");
    }

    return 0;
}