// Program to calculate the factorial of a number using a loop


#include <stdio.h>
int main()
{
    int no, i, mult;

    printf("Enter any number for Factorial : ");
    scanf("%d", &no);

    mult = 1;

    if(no>0)
    {

        for(i=1; i<=no; i++)
        {
            mult = mult * i;
        }

        printf("Factorial of %d is = %d", no, mult);
    }
    else
    {
        printf("Factorial is = 1");
    }

    return 0;
}