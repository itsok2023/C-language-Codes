// Sum of Addition of numbers given by user from 1 to that number.

#include <stdio.h>

int main()
{
    int i, sum, no;

    printf("Enter any number : ");
    scanf("%d", &no);

    sum = 0;

    for(i=1; i<=no; i++)
    {
        sum = sum + i;
    }

    printf("The sum is : %d", sum);

    return 0;
}