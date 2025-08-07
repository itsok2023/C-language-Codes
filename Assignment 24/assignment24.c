// Program to check whether a number is a palindrome

#include <stdio.h>

int main(){

    int num, result, reverse, rem;

    printf("Enter any Integer number : ");
    scanf("%d",&num);

    result = num;
    reverse = 0;

    for( ; num>0; )
    {
        rem = num % 10;
        num = num / 10;
        reverse = reverse * 10 + rem;
    }

    reverse == result
    ? printf("This number is PALINDROME")
    : printf("This number is NOT PALINDROME");

    return 0;
}