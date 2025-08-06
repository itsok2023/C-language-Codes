// Program to calculate the factorial of a number using a loop


#include <stdio.h>
int main()
{
    int no, i, mult;

    printf("Enter any number for Factorial : ");
    scanf("%d", &no);

    mult = 1;

    for(i=1; i<=no; i++)
    {
        mult = mult * i;
    }

    printf("Factorial of %d is = %d", no, mult);

    return 0;
}