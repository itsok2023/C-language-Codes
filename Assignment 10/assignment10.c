// Program to check whether a 3-digit number is a Palindrome

#include <stdio.h>

int main()
{
    int num, rem1, rem2, rem3, reverse;

    printf("Enter any number of 3 Digit : ");

    scanf("%d",&num);

    rem1 = num % 10;
    rem2 = (num / 10)% 10;
    rem3 = (num / 100);
    
    reverse = rem1 * 100 + rem2 * 10 + rem3;

    (num == reverse)
        ? printf("Number is PALINDROME")
        : printf("Number is NOT PALINDROME");

    return 0;
}