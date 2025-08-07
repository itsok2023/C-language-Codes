// Program to accept a number from the user and calculate the sum of its digits


#include <stdio.h>

int main(){

    int num, rem, sum;

    printf("Enter any Integer number : ");
    scanf("%d",&num);

    sum = 0;

    for( ; num>0; )
    {
        rem = num % 10;
        num = num / 10;
        sum = sum + rem;
    }

    printf("The sum of digits of number is = %d", sum);

    return 0;
}